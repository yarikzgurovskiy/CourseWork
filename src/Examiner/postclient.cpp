#include "postclient.h"
#include <smtp.h>

PostClient::PostClient(){}

PostClient::~PostClient(){}

PostClient::PostClient(string email, string password){
    _email = email;
    _password = password;
}


void PostClient::sendRegistrationMail(Student * st){
    string term = "Реєстрація для іспиту з Правил Дорожнього Руху";
    string text = "Доброго дня!\n\n"
                  "Шановний " + st->name() + " "+ st->surname() +
                  ", автошкола \"ZDrive\" вітає Вас з успішною реєстрацією "
                  "для проходження іспиту з Правил Дорожнього Руху!\n\n"
                  "Ваш нікнейм: " + st->nick() + "\nВаш пароль: " + st->password();
    send(term, text, st->email());
}

void PostClient::sendResultMail(Student * st){
    string term = "Результат іспиту з Правил Дорожнього Руху";
    string result = "";
    if(st->passed()) result = " успішно склали іспит ";
    else result = " на жаль не склали іспит ";

    string text = "Доброго дня!\n\n"
                  "Шановний " + st->name() + " " + st->surname() +
                  "\nВи" + result + "\nВаш результат: " + to_string(st->result()) +
                  "/20 правильних відповідей" +
                  "\nДякуємо, що скористалися послугами автошколи \"ZDrive\"!";
    send(term, text, st->email());
}


void PostClient::send(string term, string text, string email){
    Smtp * smtp = new Smtp(QString::fromStdString(_email),QString::fromStdString( _password), "smtp.gmail.com");
    smtp->sendMail(QString::fromStdString(_email), QString::fromStdString(email), QString::fromStdString(term), QString::fromStdString(text));
}

