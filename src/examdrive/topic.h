#ifndef TOPIC_H
#define TOPIC_H
#include <iostream>

using namespace std;

class Topic
{
    string _topic;
    int _number;
public:
    Topic();
    ~Topic();

    string topic();
    int number();

    void set_topic(string topic);
    void set_number(int number);
};

#endif // TOPIC_H
