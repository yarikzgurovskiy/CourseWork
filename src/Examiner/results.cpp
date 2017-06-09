#include "results.h"
#include "ui_results.h"
#include <mainwindow.h>
#include <QCloseEvent>
#include <QLineEdit>

Results::Results(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Results)
{
    ui->setupUi(this);
    setWindowTitle("Результати");

    resultsForm = new ResultsForm();
    if(resultsForm->exec() == QDialog::Rejected){
        MainWindow * menu = new MainWindow(this);
        menu->show();
        return;
    }
    bool isAll = resultsForm->findChild<QRadioButton*>("teacherButton")->isChecked();
    if(!isAll){
        client = new Client();
        Student * st = client->student(resultsForm->findChild<QLineEdit*>("nickEdit")->text().toStdString());
        delete client;
        result = new Result(st);
        result->show();
        return;
    }
    this->show();

    loadStudents();
    addStudentsToTableWidget();

}

Results::~Results()
{
    delete ui;
    for(auto stud : students) delete stud;
}

void Results::showEvent(QShowEvent * event){
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Ім'я" << "Прізвище" << "Результат" << "Склав");
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    event->accept();
}

void Results::closeEvent(QCloseEvent * event){
    event->accept();
    MainWindow * menu = new MainWindow();
    menu->show();
}

void Results::on_pushButton_clicked()
{
    this->close();
}

void Results::loadStudents(){
    client = new Client();
    students = client->allStudents();
    delete client;
}

void Results::addStudentsToTableWidget(){
    for(Student * stud : students){
        int rows = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(rows);
        //add name
        ui->tableWidget->setItem(rows, 0, new QTableWidgetItem(QString::fromStdString(stud->name())));
        //add surname
        ui->tableWidget->setItem(rows, 1, new QTableWidgetItem(QString::fromStdString(stud->surname())));
        //add result
        QString result = QString::number(stud->result()) + " / 20";
        ui->tableWidget->setItem(rows, 2, new QTableWidgetItem(result));
        //add status
        QTableWidgetItem * item = new QTableWidgetItem;
        if(stud->passed()) item->setIcon(QIcon(":images/pics/okRes.jpg"));
        else item->setIcon(QIcon(":images/pics/notOkRes.png"));
        ui->tableWidget->setItem(rows, 3, item);
    }
}
