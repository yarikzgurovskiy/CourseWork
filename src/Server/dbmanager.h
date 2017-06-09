/**
  * @file
  * @brief Module for managing sqlite database
  */

#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <iostream>
#include <vector>
#include <sqlite3.h>
#include <student.h>

using namespace std;

int db_callbackGet(void *context ,int argc, char **argv, char **azColName);

sqlite3 * db_openDb(void);
vector<string> db_getExamData(sqlite3 * db, string language);
vector<string> db_getTrainingData(sqlite3 * db, string language, string option, int id);
vector<string> db_getTopics(sqlite3 * db, string language);
vector<string> db_getAllStudents(sqlite3 * db);
string db_getStudent(sqlite3 * db, string nick);
void db_setStudent(sqlite3 * db, Student * stud);
void db_updateStudent(sqlite3 * db, Student * stud);

#endif // DBMANAGER_H
