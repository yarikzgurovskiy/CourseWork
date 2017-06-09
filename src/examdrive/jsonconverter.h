#ifndef JSONCONVERTER_H
#define JSONCONVERTER_H
#include <iostream>
#include <vector>
#include <task.h>
#include <student.h>
#include <topic.h>

using namespace std;

vector<Task*> Tasks_fromJson(string jsonString);
string Tasks_toJson(vector<Task*> tasks);

vector<Student*> Students_fromJson(string jsonString);
string Students_toJson(vector<Student*> students);

string Topics_toJson(vector<Topic*> topics);
vector<Topic*> Topics_fromJson(string jsonString);

#endif // JSONCONVERTER_H
