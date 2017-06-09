#include <response.h>

Response::Response(){
    _status = "";
    _context = "";
}

Response::Response(string message){
    size_t space = message.find(" ");
    size_t newLine = message.find("\r\n\r\n");
    if(space != string::npos && newLine != string::npos){
        _status = message.substr(space + 1, newLine - space - 1);
        _context = message.substr(newLine + 4, message.length() - newLine - 5);
    }
}

Response::~Response(){}

string Response::context(){ return _context; }
string Response::status(){ return _status; }
void Response::set_status(string status){ _status = status; }
void Response::set_context(string context){ _context = context; }

string Response::toMessage(){
    string message = "";
    message += "status: " + _status + "\r\n\r\n" + _context + "\n";
    return message;
}

