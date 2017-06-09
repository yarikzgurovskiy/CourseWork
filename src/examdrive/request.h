#ifndef REQUEST_H
#define REQUEST_H
#include <iostream>

using namespace std;

class Request
{
    string _language;
    string _type;
    string _option;
    int _id;
    string _context;
public:
    Request(string message);
    Request(string language, string type, string option = "", int id = -1, string context = "");
    ~Request();

    string language();
    string option();
    string type();
    int id();
    string context();

    string toMessage();
};

#endif // REQUEST_H

