#include "examform.h"
#include "ui_examform.h"
#include <resultsform.h>
#include <postclient.h>
#include <message.h>

ExamForm::ExamForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExamForm)
{
    ui->setupUi(this);
    setWindowTitle("Реєстрація на іспит");
}

ExamForm::~ExamForm()
{
    delete ui;
}

void ExamForm::set_enabled_options(bool selected){
    //unenable second column
    ui->nameEdit->setEnabled(!selected);
    //enable first column
    ui->nickEdit->setEnabled(selected);
}

void ExamForm::on_logButton_toggled(bool checked)
{
    set_enabled_options(checked);
    if(checked){
        ui->nameEdit->clear();
        ui->passwordEdit_2->clear();
        ui->nickEdit_2->clear();
        ui->surnameEdit->clear();
        ui->emailEdit->clear();
    }
    ui->label->clear();
}

void ExamForm::on_regButton_toggled(bool checked)
{
    set_enabled_options(!checked);
    if(checked){
        ui->passwordEdit->clear();
        ui->nickEdit->clear();
    }
    ui->label->clear();
}

void ExamForm::on_nickEdit_textChanged(const QString &arg1)
{
    if(Student::isValidNick(arg1.toStdString())){
        ui->nickEdit->setProperty("valid", true);
        ui->passwordEdit->setEnabled(true);
        ui->label->clear();
    } else {
        ui->nickEdit->setProperty("valid", false);
        ui->examButton->setEnabled(false);
        ui->label->setText("Некоректний нікнейм!");
        ui->passwordEdit->setDisabled(true);
        ui->passwordEdit->clear();
    }
    ResultsForm::updateEdit(ui->nickEdit);
}

void ExamForm::on_passwordEdit_textChanged(const QString &arg1)
{
    if(Student::isValidPassword(arg1.toStdString())){
        ui->passwordEdit->setProperty("valid", true);
        if(!ui->label->text().isEmpty()){
            ui->label->clear();
        }
        if(ui->logButton->isChecked()) ui->examButton->setEnabled(true);
    } else {
        ui->passwordEdit->setProperty("valid", false);
        ui->examButton->setEnabled(false);
        if(ui->label->text().isEmpty()){
            ui->label->setText("Некоректний пароль!");
        }
    }
    ResultsForm::updateEdit(ui->passwordEdit);
}

void ExamForm::on_nameEdit_textChanged(const QString &arg1)
{
    if(Student::isValidNameOrSurname(arg1.toStdString())){
        ui->nameEdit->setProperty("valid", true);
        ui->surnameEdit->setEnabled(true);
        ui->label->clear();
    } else {
        ui->nameEdit->setProperty("valid", false);
        ui->examButton->setEnabled(false);
        ui->label->setText("Некоректне ім'я!");
        ui->surnameEdit->setDisabled(true);
    }
    ResultsForm::updateEdit(ui->nameEdit);
}

void ExamForm::on_surnameEdit_textChanged(const QString &arg1)
{
    if(Student::isValidNameOrSurname(arg1.toStdString())){
        ui->surnameEdit->setProperty("valid", true);
        ui->emailEdit->setEnabled(true);
        ui->label->clear();
    } else {
        ui->surnameEdit->setProperty("valid", false);
        ui->examButton->setEnabled(false);
        ui->label->setText("Некоректне прізвище!");
        ui->emailEdit->setDisabled(true);
    }
    ResultsForm::updateEdit(ui->surnameEdit);
}

void ExamForm::on_emailEdit_textChanged(const QString &arg1)
{
    if(Student::isValidEmail(arg1.toStdString())){
        ui->emailEdit->setProperty("valid", true);
        ui->nickEdit_2->setEnabled(true);
        ui->label->clear();
    } else {
        ui->emailEdit->setProperty("valid", false);
        ui->examButton->setEnabled(false);
        ui->label->setText("Некоректний email!");
        ui->nickEdit_2->setDisabled(true);
    }
    ResultsForm::updateEdit(ui->emailEdit);
}

void ExamForm::on_nickEdit_2_textChanged(const QString &arg1)
{
    if(Student::isValidNick(arg1.toStdString())){
        ui->nickEdit_2->setProperty("valid", true);
        ui->passwordEdit_2->setEnabled(true);
        ui->label->clear();
    } else {
        ui->nickEdit_2->setProperty("valid", false);
        ui->examButton->setEnabled(false);
        ui->label->setText("Некоректний нікнейм!");
        ui->passwordEdit_2->setDisabled(true);
        ui->passwordEdit_2->clear();
    }
    ResultsForm::updateEdit(ui->nickEdit_2);
}

void ExamForm::on_passwordEdit_2_textChanged(const QString &arg1)
{
    if(Student::isValidPassword(arg1.toStdString())){
        ui->passwordEdit_2->setProperty("valid", true);
        if(!ui->label->text().isEmpty()){
            ui->label->clear();
        }
        ui->examButton->setEnabled(true);
    } else {
        ui->passwordEdit_2->setProperty("valid", false);
        ui->examButton->setEnabled(false);
        if(ui->label->text().isEmpty()){
            ui->label->setText("Некоректний пароль!");
        }
    }
    ResultsForm::updateEdit(ui->passwordEdit_2);
}

void ExamForm::on_examButton_clicked()
{
    if(ui->logButton->isChecked()){
        string nickToCheck = ui->nickEdit->text().toStdString();
        string passwordToCheck = ui->passwordEdit->text().toStdString();
        client = new Client();
        Student * st = client->student(nickToCheck);
        delete client;
        if(st->result() == -1){
            QMessageBox *msgBox = new QMessageBox(this);
            execCriticalMessage(msgBox, "Студента з вказаним нікнеймом не існує.\n\nСпробуйте знову!");
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
    } else {
        string nickToCheck = ui->nickEdit_2->text().toStdString();
        client = new Client();
        Student * st = client->student(nickToCheck);
        delete client;
        if(st->result() != -1){
            QMessageBox *msgBox = new QMessageBox(this);
            execCriticalMessage(msgBox, "Студент з введеним нікнеймом вже існує.\nВведіть інший нікнейм!");
            delete msgBox;
            ui->nickEdit_2->clear();
        } else {
            PostClient * postClient = new PostClient();
            Student * st = new Student(ui->nameEdit->text().toStdString(),
                                       ui->surnameEdit->text().toStdString(),
                                       ui->emailEdit->text().toStdString(),
                                       ui->nickEdit_2->text().toStdString(),
                                       ui->passwordEdit_2->text().toStdString(), 0, false);
            postClient->sendRegistrationMail(st);
            client = new Client();
            client->setStudent(st);
            delete client;
            delete postClient;
            delete st;
            this->accept();
        }
        delete st;
    }
}
