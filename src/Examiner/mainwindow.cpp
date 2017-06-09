#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDesktopWidget>
#include <QCloseEvent>
#include <testing.h>
#include <message.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{   
    ui->setupUi(this);
    setWindowTitle("Головне меню");
    moveToCenter();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_examButton_clicked()
{
    this->hide();
    TestType exam = TestType::Exam;
    testing = new Testing(exam, this);
}

void MainWindow::on_trainingButton_clicked()
{
    this->hide();
    TestType train = TestType::Training;
    testing = new Testing(train, this);
}

void MainWindow::on_resultsButton_clicked()
{
    this->hide();
    results = new Results(this);
}

void MainWindow::closeEvent(QCloseEvent * event){
    event->ignore();
    QMessageBox *msgBox = new QMessageBox(this);
    int res = execQuestionMessage(msgBox, "Підтвердження виходу", "Ви впевнені що хочете вийти з \"Екзаменатор\"?");
    delete msgBox;
    // exit if OK
    if(res == QMessageBox::Yes) event->accept();
}

void MainWindow::on_action_triggered(){
    this->hide();
    aboutWindow = new AboutWindow();
    if(aboutWindow->exec() == QDialog::Rejected){
        this->show();
    }
}

void MainWindow::moveToCenter(){
    QRect rect = frameGeometry();
    rect.moveCenter(QDesktopWidget().availableGeometry().center());
    move(rect.topLeft());
}
