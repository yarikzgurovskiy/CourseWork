#include "resultsform.h"
#include "ui_resultsform.h"
#include <message.h>

ResultsForm::ResultsForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ResultsForm)
{
    ui->setupUi(this);
    setWindowTitle("Результати");
}


ResultsForm::~ResultsForm()
{
    delete ui;
}

void ResultsForm::on_studentButton_toggled(bool checked)
{
    if(checked) ui->passwordEdit_2->clear();
    set_enabled_options(!checked);
    ui->label->clear();
}

void ResultsForm::on_teacherButton_toggled(bool checked)
{
    if(checked){
        ui->passwordEdit->clear();
        ui->nickEdit->clear();
    }
    set_enabled_options(checked);
    ui->label->clear();
}

void ResultsForm::set_enabled_options(bool selected){
    //unenable second column
    ui->nickEdit->setEnabled(!selected);
    //enable first column
    ui->passwordEdit_2->setEnabled(selected);
}

void ResultsForm::on_resultsButton_clicked()
{
    if(ui->teacherButton->isChecked()){
        if(ui->passwordEdit_2->text().toStdString() == adminPass){
            this->accept();
        } else {
            QMessageBox *msgBox = new QMessageBox(this);
            execCriticalMessage(msgBox, "Неправильний пароль. Спробуйте знову!");
            delete msgBox;
            ui->passwordEdit_2->clear();
        }
    } else {
        string nickToCheck = ui->nickEdit->text().toStdString();
        string passwordToCheck = ui->passwordEdit->text().toStdString();
        client = new Client();
        Student * st = client->student(nickToCheck);
        delete client;
        if(st->result() == -1){
            QMessageBox *msgBox = new QMessageBox(this);
            execCriticalMessage(msgBox, "Студента з даним нікнеймом не існує.\nСпробуйте знову!");
            delete msgBox;
            ui->nickEdit->clear();
            ui->passwordEdit->clear();
        } else if(st->password() != passwordToCheck){
            QMessageBox *msgBox = new QMessageBox(this);
            execCriticalMessage(msgBox, "Неправильний пароль. Спробуйте знову!");
            delete msgBox;
            ui->passwordEdit->clear();
        } else {
            this->accept();
        }
        delete st;
    }
}

void ResultsForm::on_nickEdit_textChanged(const QString &arg1)
{
    if(Student::isValidNick(arg1.toStdString())){
        ui->nickEdit->setProperty("valid", true);
        ui->passwordEdit->setEnabled(true);
        ui->label->clear();
    } else {
        ui->nickEdit->setProperty("valid", false);
        ui->resultsButton->setEnabled(false);
        ui->label->setText("Некоректний нікнейм!");
        ui->passwordEdit->setDisabled(true);
    }
    updateEdit(ui->nickEdit);
}

void ResultsForm::on_passwordEdit_textChanged(const QString &arg1)
{
    if(Student::isValidPassword(arg1.toStdString())){
        ui->passwordEdit->setProperty("valid", true);
        if(!ui->label->text().isEmpty()){
            ui->label->clear();
        }
        ui->resultsButton->setEnabled(true);
    } else {
        ui->passwordEdit->setProperty("valid", false);
        ui->resultsButton->setEnabled(false);
        if(ui->label->text().isEmpty()){
            ui->label->setText("Некоректний пароль!");
        }
    }
    updateEdit(ui->passwordEdit);
}

void ResultsForm::on_passwordEdit_2_textChanged(const QString &arg1)
{
    if(Student::isValidPassword(arg1.toStdString())){
        ui->passwordEdit_2->setProperty("valid", true);
        ui->label->clear();
        ui->resultsButton->setEnabled(true);
    } else {
        ui->passwordEdit_2->setProperty("valid", false);
        ui->resultsButton->setEnabled(false);
        ui->label->setText("Некоректний пароль!");
    }
    updateEdit(ui->passwordEdit_2);
}

void ResultsForm::updateEdit(QLineEdit * lineEdit){
    lineEdit->style()->unpolish(lineEdit);
    lineEdit->style()->polish(lineEdit);
}

