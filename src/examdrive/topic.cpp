#include "topic.h"

Topic::Topic()
{
    _topic = "";
    _number = 0;
}

Topic::~Topic(){}

string Topic::topic(){ return _topic; }
int Topic::number(){ return _number; }

void Topic::set_topic(string topic){ _topic = topic; }
void Topic::set_number(int number){ _number = number; }
