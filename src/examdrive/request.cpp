#include "request.h"

Request::Request(string message){
    size_t space = message.find(" ");
    size_t newLine = message.find("\r\n");
    if(space != string::npos && newLine != string::npos){
        _language = message.substr(space + 1, newLine - space - 1);
    }
    space = message.find(" ", newLine + 4);
    newLine = message.find("\r\n", newLine + 4);
    if(space != string::npos && newLine != string::npos){
        _type = message.substr(space + 1, newLine - space - 1);
    }
    space = message.find(" ", newLine + 4);
    newLine = message.find("\r\n", newLine + 4);
    if(space != string::npos && newLine != string::npos){
        _option = message.substr(space + 1, newLine - space - 1);
    }

    space = message.find(" ", newLine + 4);
    newLine = message.find("\r\n\r\n", newLine + 4);
    if(space != string::npos && newLine != string::npos){
        _id = stoi(message.substr(space + 1, newLine - space - 1));
        _context = message.substr(newLine + 4, message.length() - newLine - 4);
    }
}

Request::Request(string language, string type, string option, int id, string context){
    _language = language;
    _option = option;
    _type = type;
    _id = id;
    _context = context;
}

Request::~Request(){}


string Request::toMessage(){
    string message = "";
    message += "language: " + _language +
            "\r\ntype: " + _type +
            "\r\noption: " + _option +
            "\r\nid: " + to_string(_id) + "\r\n\r\n";
    message += _context;
    return message;
}

string Request::language(){ return _language; }
string Request::option(){ return _option; }
string Request::type(){ return _type; }
int Request::id(){ return _id; }
string Request::context(){ return _context; }

