#ifndef RESPONSE_H
#define RESPONSE_H

#include <iostream>

using namespace std;

class Response{
    string _status;
    string _context;
public:
    Response();
    Response(string message);
    ~Response();

    string context();
    string status();
    void set_status(string status);
    void set_context(string context);

    string toMessage();
};

#endif // RESPONSE_H
