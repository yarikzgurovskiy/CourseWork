/**
  * @file
  * @brief Module for converting strings to objects
  */
#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <vector>
#include <topic.h>
#include <student.h>
#include <task.h>

using namespace std;

/**
 * @brief convert strings to Tasks
 * @param vector of strings to convert
 * @return vector of Tasks converted from strings
 */
vector<Task*> Tasks_fromStrings(vector<string> data);

/**
 * @brief convert strings to Students
 * @param vector of strings to convert
 * @return vector of Students converted from strings
 */
vector<Student*> Students_fromStrings(vector<string> data);

/**
 * @brief convert strings to Topics
 * @param vector of strings to convert
 * @return vector of Topics converted from strings
 */
vector<Topic*> Topics_fromStrings(vector<string> data);

#endif //CONVERTER_H
