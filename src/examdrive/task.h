#ifndef TASK_H
#define TASK_H
#include <iostream>
#include <vector>
#include <QPixmap>

using namespace std;


class Task
{
    int _ticket;
    int _number;
    string _question;
    vector<string> _answers;
    string _answer;
    string _explanation;
    string _picture;
public:
    Task();
    ~Task();

    void set_ticket(int ticket);
    void set_number(int number);
    void set_question(string question);
    void add_answer(string answer);
    void set_answer(string answer);
    void set_explanation(string explanation);
    //void set_picture(QPixmap pic);
    void set_picture(string base64);

    int ticket();
    int number();
    string question();
    vector<string> answers();
    string answer();
    string explanation();
    QPixmap picture();
    string pictureInBase64();
};

#endif // TASK_H
