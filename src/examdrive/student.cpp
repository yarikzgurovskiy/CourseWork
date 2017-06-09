#include "student.h"
#include <QJsonObject>
#include <QJsonDocument>
#include <ctype.h>

Student::Student()
{
    _name = "";
    _surname = "";
    _email = "";
    _nick = "";
    _password = "";
    _result = -1;
    _passed = false;
}
Student::~Student(){}

Student::Student(string name, string surname, string email, string nick, string password, int result, bool passed){
    _name = name;
    _surname = surname;
    _email = email;
    _nick = nick;
    _password = password;
    _result = result;
    _passed = passed;
}

Student::Student(string jsonString){
    QJsonDocument jdoc = QJsonDocument::fromJson(QString::fromStdString(jsonString).toUtf8());
    if(jdoc.isObject()){
        QJsonObject jobj = jdoc.object();
        _name = jobj["name"].toString().toStdString();
        _surname = jobj["surname"].toString().toStdString();
        _email = jobj["email"].toString().toStdString();
        _nick = jobj["nick"].toString().toStdString();
        _password = jobj["password"].toString().toStdString();
        _result = jobj["result"].toInt();
        _passed = jobj["passed"].toBool();
    }
}

string Student::name(){ return _name; }
string Student::surname(){ return _surname; }
string Student::email(){ return _email; }
string Student::nick(){ return _nick; }
string Student::password(){ return _password; }
int Student::result(){ return _result; }
bool Student::passed(){ return _passed; }
string Student::passedInStr(){ return _passed ? "true" : "false"; }

void Student::set_name(string name){ _name = name ;}
void Student::set_surname(string surname){ _surname = surname; }
void Student::set_email(string email){ _email = email; }
void Student::set_nick(string nick){ _nick = nick; }
void Student::set_password(string password){ _password = password; }
void Student::set_result(int result){ _result = result; }
void Student::set_passed(bool passed){ _passed = passed; }

string Student::toJsonString(){
    QJsonObject json;
    json.insert("name", QString::fromStdString(_name));
    json.insert("surname", QString::fromStdString(_surname));
    json.insert("email", QString::fromStdString(_email));
    json.insert("nick", QString::fromStdString(_nick));
    json.insert("password", QString::fromStdString(_password));
    json.insert("result", _result);
    json.insert("passed", _passed);
    QJsonDocument doc(json);
    return doc.toJson().toStdString();
}

void Student::fillFromString(string dbString){
    int i = 1;
    int j = 0;
    char ch = '\0';
    char prevCh = '\0';
    string key;
    string value;
    while(dbString[i]){
        ch = dbString[i];
        prevCh = dbString[i - 1];
        if(ch == ':' && prevCh == ':'){
            key = string(dbString, j, i - j - 1);
            j = i + 1;
        }
        if(ch == '|'){
            value = string(dbString, j, i - j);
            j = i + 1;
            if(key == "name") _name = value;
            else if(key == "surname") _surname = value;
            else if(key == "email") _email = value;
            else if(key == "nick") _nick = value;
            else if(key == "password") _password = value;
            else if(key == "result") _result = stoi(value);
            else if(key == "passed") _passed = (value == "true");
        }
        i++;
    }
}

bool Student::isValidNameOrSurname(string data){
    if(data.empty()) return false;
    if(!isupper(data[0])) return false;
    for(int i = 1; i < data.length(); i++){
        if(!islower(data[i])) return false;
    }
    return true;
}

bool Student::isValidNick(string nick){
    if(nick.empty()) return false;
    for(char x : nick){
        if(!isgraph(x)) return false;
    }
    return true;
}

bool Student::isValidEmail(string email){
    if(email.empty()) return false;
    for(char x : email){
        if(!isgraph(x)) return false;
        if(x == '@') return true;
    }
    return false;
}

bool Student::isValidPassword(string password){
    if(password.empty() || password.length() < 6) return false;
    for(char x : password){
        if(!isgraph(x)) return false;
    }
    return true;
}
