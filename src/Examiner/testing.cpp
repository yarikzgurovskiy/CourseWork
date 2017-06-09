#include "testing.h"
#include "ui_testing.h"
#include "mainwindow.h"
#include <message.h>
#include <postclient.h>

#include <QTimeEdit>
#include <QSpinBox>
#include <QComboBox>
#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>
#include <QLineEdit>

Testing::Testing(TestType type, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Testing)
{
    ui->setupUi(this);
    _type = type;

    switch (_type) {
    case TestType::Training:{
        trainingForm = new TrainingForm(this);
        if(trainingForm->exec() == QDialog::Rejected){
            MainWindow * menu = new MainWindow(this);
            menu->show();
            return;
        }
        setWindowTitle("Тренування");
        break;
    }
    case TestType::Exam:{
        examForm = new ExamForm(this);
        if(examForm->exec() == QDialog::Rejected){
            MainWindow * menu = new MainWindow(this);
            menu->show();
            return;
        }
        setWindowTitle("Іспит");
        getStudentFromExamForm();
        break;
    }
    }

    initializeTimer();
    setTime();
    loadTasks();
    fillTasksInTabs(tasks);

    this->show();
}

Testing::~Testing()
{
    for(auto task : tasks) delete task;
    for(auto exp : explanations) delete exp;
    for(auto lab : labels) delete lab;
    for(auto buts : answers){
        for(auto but : buts) delete but;
    }
    if(question != nullptr) delete question;
    if(time != nullptr) delete time;
    if(timer != nullptr) delete timer;
    if(stud != NULL) delete stud;
    delete ui;
}

void Testing::activateAnswerButton(){
    ui->answerButton->setEnabled(true);
}

void Testing::onTimerUpdate()
{
    QString text = time->toString("mm:ss");
    if ((time->second() % 2) == 0) text[2] = ' ';
    //show time at LCD
    ui->lcdNumber->display(text);
    //update time
    if(time->minute() == 0 && time->second() == 0){
        timerElapsed();
        timer->stop();
        ui->lcdNumber->display("");
        return;
    }
    if(time->second() == 0) time->setHMS(time->hour(), time->minute() - 1, 59,0);
    else(time->setHMS(time->hour(), time->minute(), time->second() - 1, 0));
}


void Testing::on_missButton_clicked()
{
    ui->tabWidget->setCurrentIndex(ui->tabWidget->currentIndex() + 1);
}

void Testing::on_answerButton_clicked()
{
    //change number of answers
    task++;
    QString numOfAnswers = QString::number(task) + " / " + QString::number(tasks.size());
    ui->answersLabel->setText(numOfAnswers);
    ui->answerButton->setEnabled(false);
    ui->missButton->setText("Наступне");

    int cur = ui->tabWidget->currentIndex();

    if(_type == TestType::Training) explanations[cur]->setVisible(true);
    if(_type == TestType::Exam) ui->tabWidget->setTabIcon(cur, QIcon(":images/pics/checked.png"));

    string answer = tasks.at(cur)->answer();

    for(unsigned int i = 0; i < answers[cur].size(); i++){
        QRadioButton * but = answers[cur][i];
        /**
          mark up right answer if Training
          */
        if(answer == but->text().toStdString() && _type == TestType::Training){
            but->setStyleSheet("background-color: #7FFFD4");
        }
        /**
          work with checked Button
          */
        if(but->isChecked()){
            if(answer == but->text().toStdString()){
                if(_type == TestType::Training){
                    but->setStyleSheet("background-color: #7FFFD4");
                    ui->tabWidget->setTabIcon(cur, QIcon(":images/pics/okRes.jpg"));
                }
                rightTask++;
            } else {
                if(_type == TestType::Training){
                    but->setStyleSheet("background-color: #FF6347");
                    ui->tabWidget->setTabIcon(cur, QIcon(":images/pics/notOkRes.png"));
                }
            }
        }
        /**
          disabled all buttons
          */
        but->setDisabled(true);
    }
    qDebug() << rightTask;
    if(task == tasks.size()) allQuestionsAnswered();
    if(_type == TestType::Exam) ui->tabWidget->setCurrentIndex(cur + 1);
}

void Testing::on_tabWidget_currentChanged(int index)
{
    ui->missButton->setEnabled(index != ui->tabWidget->count() - 1);
    ui->answerButton->setEnabled(false);
    ui->missButton->setText("Пропустити");
    for(QRadioButton * but : answers[index]){
        if(!but->isEnabled()) break;
        if(but->isChecked()){
            activateAnswerButton();
            break;
        }
    }
    qDebug() << tasks.at(index)->ticket() << tasks[index]->number();
}

void Testing::timerElapsed(){
    QMessageBox *msgBox = new QMessageBox(this);
    timer->stop();
    switch (_type) {
    case TestType::Training:{
        int res = execQuestionMessage(msgBox, "Закінчення часу",
                                      "Час вийшов!!!\n\nВи хочете продовжити тренування без урахування часу?");
        if(res == QMessageBox::No) this->close();
        break;
    }
    case TestType::Exam:{
        /**
         actions when time is over exam
         */
        setStudentResult();
        PostClient * postClient = new PostClient();
        client = new Client();
        postClient->sendResultMail(stud);
        client->updateStudent(stud);
        delete postClient;
        delete client;
        QString message = "Час вийшов!!!\nВаш результат: " +
                QString::number(rightTask) + "/" + QString::number(tasks.size())
                + "\nНатисніть \"Ок\" щоб вийти";
        int res = execInfoMessage(msgBox, "Закінчення часу",
                                  message);
        if(res == QMessageBox::Ok) this->close();
        break;
    }
    }
    delete msgBox;
}

void Testing::allQuestionsAnswered(){
    /**
      actions after all questions answered
      */
    QMessageBox * msgBox = new QMessageBox(this);
    switch (_type) {
    case TestType::Training:{
        QString message = "Ви відповіли на всі запитання.\nВаш результат: " +
                QString::number(rightTask) + "/" + QString::number(tasks.size())
                + "\nНатисніть \"Ок\" щоб вийти";
        int res = execInfoMessage(msgBox, "Закінчення тренування", message);
        if(res == QMessageBox::Ok) this->close();
        break;
    }
    case TestType::Exam:{
        setStudentResult();
        PostClient * postClient = new PostClient();
        client = new Client();
        postClient->sendResultMail(stud);
        client->updateStudent(stud);
        delete postClient;
        delete client;
        QString message = "Ви відповіли на всі запитання.\nВаш результат: " +
                QString::number(rightTask) + "/" + QString::number(tasks.size())
                + "\nНатисніть \"Ок\" щоб вийти";
        int res = execInfoMessage(msgBox, "Закінчення іспиту", message);
        if(res == QMessageBox::Ok) this->close();
        break;
    }
    }
    delete msgBox;
}

void Testing::closeEvent(QCloseEvent * event){
    event->ignore();
    if(timer->isActive() && task != tasks.size()){
        timer->stop();
        QMessageBox *msgBox = new QMessageBox(this);
        switch (_type) {
        case TestType::Training: {
            int res = execQuestionMessage(msgBox, "Підтвердження виходу",
                                          "Ви впевнені, що хочете повернутися до головного меню?");

            // exit if YES
            if(res == QMessageBox::Yes){
                MainWindow * menu = new MainWindow();
                menu->show();
                event->accept();
            } else timer->start();
            break;
        }
        case TestType::Exam:{
            int res = execQuestionMessage(msgBox, "Підтвердження виходу",
                                          "Ви впевнені, що хочете повернутися до головного меню?\n\n"
                                          "Якщо ви вийдете, то ваш прогрес не збережеться!");
            if(res == QMessageBox::Yes){
                MainWindow * menu = new MainWindow();
                menu->show();
                event->accept();
            } else timer->start();
        }
        }
        delete msgBox;
    } else {
        MainWindow * menu = new MainWindow();
        menu->show();
        event->accept();
        timer->stop();
    }
}


void Testing::loadTasks(){
    client = new Client();
    switch (_type) {
    case TestType::Training:{
        bool isTicket = trainingForm->findChild<QRadioButton*>("radioButton")->isChecked();
        string option;
        int id;
        if(isTicket){
            option = "ticket";
            id = trainingForm->findChild<QSpinBox*>("spinBox")->value();
        } else {
            option = "topic";
            id = stoi(trainingForm->findChild<QComboBox*>("comboBox")->currentText().toStdString());
        }
        //load tasks
        tasks = client->tasks("ukr", option, id);
        break;
    }
    case TestType::Exam:{
        tasks = client->tasks("ukr");
        break;
    }
    }
    delete client;
}

void Testing::fillTasksInTabs(vector<Task*>tasks){
    for(auto task : tasks) {
        //create layouts
        mainLayout = new QVBoxLayout();
        hLayout = new QHBoxLayout();
        vLayout = new QVBoxLayout();
        //create TextBrowser for question
        question = new QTextBrowser();
        question->setStyleSheet("font-size: 20px; text-align: center; background-color: rgb(251, 237, 217);");
        question->setText(QString::fromStdString(task->question()));
        question->setFixedHeight(75);
        mainLayout->addWidget(question);
        //create label for picture
        QLabel * picture = new QLabel();
        picture->setPixmap(task->picture());
        //add pictures to vector of labels
        labels.push_back(picture);
        //add answers as RadioButtons
        vector<QRadioButton*> buttons = {};
        for(auto ans : task->answers()){
            QRadioButton * but = new QRadioButton();
            connect(but, SIGNAL(pressed()), this, SLOT(activateAnswerButton()));
            but->setText(QString::fromStdString(ans));
            vLayout->addWidget(but);
            buttons.push_back(but);
        }
        //add answers to vector
        answers.push_back(buttons);
        //add picture and answers to Layout
        if(!(picture->pixmap()->isNull())) hLayout->addWidget(picture);
        hLayout->addLayout(vLayout);
        //add other widgets to mainLayout
        mainLayout->addLayout(hLayout);
        //create TextBrowser for explanation to task if training
        if(_type == TestType::Training){
            QTextBrowser * explanation = new QTextBrowser();
            explanation->setStyleSheet("background-color: rgb(251, 237, 217);");
            explanation->setVisible(false);
            explanation->setText(QString::fromStdString(task->explanation()));
            explanation->setFixedHeight(85);
            //add explanation to vector
            explanations.push_back(explanation);
            //add explanation to Tab
            mainLayout->addWidget(explanation);
        }
        //create Widget as Tab
        widget = new QWidget();
        widget->setLayout(mainLayout);
        //add tab to TabWidget
        ui->tabWidget->addTab(widget, "");
    }
}

void Testing::setTime(){
    switch (_type) {
    case TestType::Training:{
        time = new QTime();
        *time = trainingForm->findChild<QTimeEdit *>("timeEdit")->time();
        break;
    }
    case TestType::Exam:{
        time = new QTime(0, 20, 0, 0);
        break;
    }
    }
}

void Testing::getStudentFromExamForm(){
    if(examForm->findChild<QRadioButton*>("logButton")->isChecked()){
        client  = new Client();
        stud = client->student(examForm->findChild<QLineEdit*>("nickEdit")->text().toStdString());
        delete client;
    } else {
        stud = new Student(examForm->findChild<QLineEdit*>("nameEdit")->text().toStdString(),
                           examForm->findChild<QLineEdit*>("surnameEdit")->text().toStdString(),
                           examForm->findChild<QLineEdit*>("emailEdit")->text().toStdString(),
                           examForm->findChild<QLineEdit*>("nickEdit_2")->text().toStdString(),
                           examForm->findChild<QLineEdit*>("passwordEdit_2")->text().toStdString(), 0, false);
    }
}

void Testing::setStudentResult(){
    stud->set_result(rightTask);
    stud->set_passed(rightTask >= 18);
}

void Testing::initializeTimer(){
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimerUpdate()));
    timer->start(1000);
}

void Testing::showEvent(QShowEvent * event){
    ui->timeLabel->setFixedSize(70, 50);
    ui->missButton->setFixedHeight(45);
    ui->answerButton->setFixedHeight(45);

    ui->tabWidget->setStyleSheet("QTabBar::tab { min-width: 52px; }");
    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->removeTab(0);
    ui->answerButton->setDisabled(true);
    //set number of question
    for(int i = 0; i < ui->tabWidget->count(); i++) ui->tabWidget->setTabText(i, QString::number(i + 1));
    ui->lcdNumber->display("");
    ui->answersLabel->setText(QString::number(task) + " / " + QString::number(tasks.size()));
    event->accept();
}

