#include "result.h"
#include "ui_result.h"
#include <mainwindow.h>
#include <QCloseEvent>

Result::Result(Student * st, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);

    _stud = st;
    setWindowTitle("Результат");

    fillStudentForm();
}

Result::~Result()
{
    delete ui;
    delete _stud;
}

void Result::on_backButton_clicked()
{
    this->close(); 
}

void Result::closeEvent(QCloseEvent * event){
    MainWindow *menu = new MainWindow();
    menu->show();
    event->accept();
}

void Result::fillStudentForm(){
    ui->nameLabel->setText(QString::fromStdString(_stud->name()));
    ui->surnameLabel->setText(QString::fromStdString(_stud->surname()));
    ui->resultLabel->setText(QString::number(_stud->result()));
    ui->statusLabel->setScaledContents(true);
    ui->statusLabel->setFixedSize(QSize(15, 20));
    if(_stud->passed()) ui->statusLabel->setPixmap(QPixmap(":images/pics/okRes.jpg"));
    else ui->statusLabel->setPixmap(QPixmap(":images/pics/notOkRes.png"));
}
