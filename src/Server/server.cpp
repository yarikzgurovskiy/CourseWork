#include "server.h"
#include <iostream>
#include <QDebug>
#include <request.h>
#include <response.h>

using namespace std;

Server::Server(TcpListener *listener, IpAddress *address){
    _listener = listener;
    _address = address;
    _isActive = false;
    _handlers.push_back({ "tasks", tasksHandler});
    _handlers.push_back({ "students", studentsHandler});
    _handlers.push_back({ "topics", topicsHandler});
}

Server::~Server(){
    delete _listener;
    delete _address;
}

Server * Server::init(int serverPort){
    TcpListener *listener = new TcpListener();
    IpAddress *address = new IpAddress("127.0.0.1", serverPort);
    try {
        listener->bind(*address);
    } catch(NetException const & exc){
        cerr << exc.what() << endl;
        delete listener;
        delete address;
        return NULL;
    }
    return new Server(listener, address);
}

void Server::start(){
    _isActive = true;
    long long capacity = 10000000;
    NetMessage message(capacity);
    try {
        _listener->start();
        while (_isActive) {
            qDebug() << ">> Waiting for clients at " << QString::fromStdString(_address->address()) << ": " << _address->port() << " ...";
            send(message);
        }
    }catch(NetException const & exc){
        cerr << exc.what() << endl;
    }
}

void Server::send(NetMessage message){
    TcpClient *client = _listener->accept();
    client->receive(message);
    cout << ">> Received: \r\n" << message.dataAsString() << endl;
    Request * req = new Request(message.dataAsString());
    Response * res = new Response();
    processRequest(req, res, _handlers);
    message.setDataString(res->toMessage());
    client->send(message);
    cout << message.dataAsString();
    delete client;
    delete req;
    delete res;
}

void Server::stop(){
    if(_isActive) _isActive = false;
}
