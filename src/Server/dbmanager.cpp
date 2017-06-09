#include "dbmanager.h"
#include <cstring>
#include <cstdio>

//some usefull functions
string quotesql( const string& s ){ return string("'") + s + string("'"); }
string btos(bool b) {return b ? "true" : "false"; }

int db_callbackGet(void *context ,int argc, char **argv, char **azColName){
    vector<string>* data = (vector<string>*)(context);
    string buffer = "";
    for(int i = 0; i < argc; i++){
        if(azColName[i] != NULL && argv[i] != NULL){
            buffer += azColName[i];
            buffer += "::";
            buffer += argv[i];
            buffer += "|";
        }
    }
    data->push_back(buffer);
    return 0;
}

#define DBNAME "../../data/database/testingdb"

sqlite3 * db_openDb(void){
    sqlite3 * db = NULL;
    //open db
    if (SQLITE_OK != sqlite3_open(DBNAME, &db)){
        return NULL;
    }
    return db;
}

#undef DBNAME

vector<string> db_getExamData(sqlite3 * db, string language){
    vector<string> data = {};
    char *zErrMsg = 0;
    char sqlScript[500] = "";
    //generate number of ticket
    srand (time(NULL));
    int tickets = 100;
    int id = rand() % tickets + 1;
    char table[15] = "";
    (language == "ukr") ? strcpy(table, "ukrtests") : strcpy(table, "rustests");

    sprintf(sqlScript, "SELECT a.id, a.question, a.answer, a.answers, a.explanation, b.path FROM %s a "
                       "LEFT OUTER JOIN pictures b ON b.id = a.id "
                       "WHERE a.id > %i00 AND a.id < %i00 ORDER BY random()", table, id, id + 1);

    int rc = sqlite3_exec(db, sqlScript, db_callbackGet, &data, &zErrMsg);
    if( rc != SQLITE_OK ){
        sqlite3_free(zErrMsg);
    }
    sqlite3_close(db);
    return data;
}

vector<string> db_getTrainingData(sqlite3 * db, string language, string option, int id){
    vector<string> data = {};
    char *zErrMsg = 0;
    char sqlScript[500] = "";
    char table[15] = "";
    (language == "ukr") ? strcpy(table, "ukrtests") : strcpy(table, "rustests");

    if(option == "ticket"){
        sprintf(sqlScript, "SELECT a.id, a.question, a.answer, a.answers, a.explanation, b.path "
                           "FROM %s a LEFT OUTER JOIN pictures b ON b.id = a.id "
                           "WHERE a.id > %i00 AND a.id < %i00 ORDER BY random()", table, id, id + 1);
    } else {
        sprintf(sqlScript, "SELECT a.id, a.question, a.answer, a.answers, a.explanation, b.path "
                           "FROM %s a LEFT OUTER JOIN pictures b ON b.id = a.id "
                           "WHERE topic = %i ORDER BY random() LIMIT 20", table, id);
    }
    int rc = sqlite3_exec(db, sqlScript, db_callbackGet, &data, &zErrMsg);
    if( rc != SQLITE_OK ) sqlite3_free(zErrMsg);
    sqlite3_close(db);
    return data;
}

vector<string> db_getTopics(sqlite3 * db, string language){
    vector<string> data = {};
    char *zErrMsg = 0;
    char sqlScript[500] = "";
    char lang[15] = "";
    (language == "ukr") ? strcpy(lang, "ukr") : strcpy(lang, "rus");

    sprintf(sqlScript, "SELECT id, %s FROM topics", lang);

    int rc = sqlite3_exec(db, sqlScript, db_callbackGet, &data, &zErrMsg);
    if( rc != SQLITE_OK ) sqlite3_free(zErrMsg);
    sqlite3_close(db);
    return data;
}

vector<string> db_getAllStudents(sqlite3 * db){
    vector<string> data = {};
    char *zErrMsg = 0;
    string sqlScript = "SELECT * FROM students ORDER by result";
    int rc = sqlite3_exec(db, sqlScript.c_str(), db_callbackGet, &data, &zErrMsg);
    if( rc != SQLITE_OK ) sqlite3_free(zErrMsg);
    sqlite3_close(db);
    return data;
}

string db_getStudent(sqlite3 * db, string nick){
    vector<string> data = {};
    char *zErrMsg = 0;
    string sqlScript = "SELECT * FROM students WHERE nick = " + quotesql(nick);
    int rc = sqlite3_exec(db, sqlScript.c_str(), db_callbackGet, &data, &zErrMsg);
    if( rc != SQLITE_OK ) sqlite3_free(zErrMsg);
    sqlite3_close(db);
    if(data.empty()) return "";
    return data[0];
}

void db_setStudent(sqlite3 * db, Student * stud){
    sqlite3_stmt *stmt;
    string sqlstatement =
            "INSERT INTO students (name, surname, email, nick, password, result, passed) VALUES ("
            + quotesql(stud->name()) + ","
            + quotesql(stud->surname()) + ","
            + quotesql(stud->email()) + ","
            + quotesql(stud->nick()) + ","
            + quotesql(stud->password()) + ","
            + to_string(stud->result()) + ","
            + quotesql(stud->passedInStr()) + ")";

    sqlite3_prepare(db,sqlstatement.c_str(), -1, &stmt, NULL);//preparing the statement
    sqlite3_step(stmt);//executing the statement

    sqlite3_finalize(stmt);
    sqlite3_close(db);
}

void db_updateStudent(sqlite3 * db, Student * stud){
    sqlite3_stmt *stmt;
    string sqlstatement =
            "UPDATE students SET result=" + to_string(stud->result()) + ","
            + "passed=" + quotesql(stud->passedInStr()) + "WHERE nick=" + quotesql(stud->nick());

    sqlite3_prepare(db,sqlstatement.c_str(), -1, &stmt, NULL);//preparing the statement
    sqlite3_step(stmt);//executing the statement

    sqlite3_finalize(stmt);
    sqlite3_close(db);
}


