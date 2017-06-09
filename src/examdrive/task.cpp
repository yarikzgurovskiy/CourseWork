#include "task.h"
#include <QBuffer>

Task::Task()
{
    _ticket = 0;
    _number = 0;
    _question = "";
    _answers = {};
    _answer = "";
    _explanation = "";
    _picture = "";
    //_picture = QPixmap("");
}

Task::~Task(){}

void Task::set_ticket(int ticket) { _ticket = ticket; }
void Task::set_number(int number) { _number = number; }
void Task::set_question(string question){ _question = question; }
void Task::add_answer(string answer){ _answers.push_back(answer); }
void Task::set_answer(string answer){ _answer = answer; }
void Task::set_explanation(string explanation){ _explanation = explanation; }
//void Task::set_picture(QPixmap pic) {_picture = pic; }
void Task::set_picture(string base64){
//    QByteArray arr = QByteArray::fromStdString(base64);
//    QPixmap image;
//    image.loadFromData(QByteArray::fromBase64(arr), "GIF");
//    _picture = image;
    _picture = base64;
}

int Task::ticket(){ return _ticket; }
int Task::number(){ return _number; }
string Task::question(){ return _question; }
vector<string> Task::answers(){ return _answers; }
string Task::answer(){ return _answer; }
string Task::explanation(){ return _explanation; }
QPixmap Task::picture(){
    QByteArray arr = QByteArray::fromStdString(_picture);
    QPixmap image;
    image.loadFromData(QByteArray::fromBase64(arr), "GIF");
    return image;
}
string Task::pictureInBase64(){
//    QByteArray byteArray;
//    QBuffer buffer(&byteArray);
//    _picture.save(&buffer, "GIF");
//    return QString::fromLatin1(byteArray.toBase64().data()).toStdString();
    return _picture;
}
