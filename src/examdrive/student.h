#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
    string _name;
    string _surname;
    string _email;
    string _nick;
    string _password;
    int _result;
    bool _passed;
public:
    Student();
    ~Student();

    Student(string name, string surname, string email, string nick, string password, int result, bool passed);
    Student(string jsonString);

    string name();
    string surname();
    string email();
    string nick();
    string password();
    int result();
    bool passed();
    string passedInStr();

    void set_name(string name);
    void set_surname(string surname);
    void set_email(string email);
    void set_nick(string nick);
    void set_password(string password);
    void set_result(int result);
    void set_passed(bool passed);

    string toJsonString();
    void fillFromString(string dbString);

    static bool isValidNameOrSurname(string data);
    static bool isValidNick(string nick);
    static bool isValidEmail(string email);
    static bool isValidPassword(string password);
};

#endif // STUDENT_H
