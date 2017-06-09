#include "client.h"
#include <iostream>
#include <QDebug>
#include <response.h>
#include <jsonconverter.h>

Client::Client(){
    _client = new TcpClient();
}

Client::~Client(){ delete _client; }

string Client::send(Request * req){
    string response = "";
    NetMessage message(500);
    try {
        _client->connect(IpAddress("127.0.0.1", ServerPort));
        message.setDataString(req->toMessage());
        _client->send(message);
        qDebug() << ">> Request sent <<";
        do {
            _client->receive(message);
            response += message.dataAsString();
        } while (!message.isEmpty());
    } catch(NetException const & exc) {
        cerr << exc.what() << endl;
    }
    return response;
}

void printStatus(const string& status){
    qDebug() << ">> Response status: " << QString::fromStdString(status) << " <<";
}

vector<Topic*> Client::topics(string lang){
    Request * req = new Request(lang, "topics");
    Response * res = new Response(send(req));
    printStatus(res->status());
    vector<Topic*> topics = {};
    if(res->status() == "OK") topics = Topics_fromJson(res->context());
    delete req;
    delete res;
    return topics;
}

vector<Task*> Client::tasks(string lang, string type, int number){
    Request * req = new Request(lang, "tasks", type, number);
    Response * res = new Response(send(req));
    printStatus(res->status());
    vector<Task*> tasks = {};
    if(res->status() == "OK") tasks = Tasks_fromJson(res->context());
    delete req;
    delete res;
    return tasks;
}

vector<Student*> Client::allStudents(){
    Request * req = new Request("", "students", "all");
    Response * res = new Response(send(req));
    printStatus(res->status());
    vector<Student*> studs = {};
    if(res->status() == "OK") studs = Students_fromJson(res->context());
    delete req;
    delete res;
    return studs;
}

Student * Client::student(string nick){
    Request * req = new Request("", "students", "get", 0, nick);
    Response * res = new Response(send(req));
    printStatus(res->status());
    Student * st = NULL;
    st = new Student(res->context());
    delete req;
    delete res;
    return st;
}

void Client::setStudent(Student * st){
    Request * req = new Request("", "students", "set", 0, st->toJsonString());
    Response *res = new Response(send(req));
    printStatus(res->status());
    delete req;
    delete res;
}

void Client::updateStudent(Student * st){
    Request * req = new Request("", "students", "update", 0, st->toJsonString());
    Response *res = new Response(send(req));
    printStatus(res->status());
    delete req;
    delete res;
}



