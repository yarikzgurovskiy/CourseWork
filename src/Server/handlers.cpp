#include "handlers.h"
#include <dbmanager.h>
#include <converter.h>
#include <jsonconverter.h>

RequestHandler getCommandRequestHandler(vector<CommandHandler> handlers, string type){
    for(auto handler : handlers){
        if(handler.type == type) return handler.handler;
    }
    return NULL;
}

void processRequest(Request * req, Response * res, vector<CommandHandler> handlers){
    RequestHandler handler = getCommandRequestHandler(handlers, req->type());
    if(NULL == handler){
        res->set_status("WRONG COMMAND");
        return;
    }
    sqlite3* db = NULL;
    db = db_openDb();
    if(NULL == db) {
        res->set_status("DATABASE ERROR");
        return;
    }
    res->set_status("OK");
    handler(req, res, db);
}

void tasksHandler(Request * req, Response * res, sqlite3* db){
    vector<string> data = {};
    if(req->option() == "topic" || req->option() == "ticket"){
        data = db_getTrainingData(db, req->language(), req->option(), req->id());
    }
    else if(req->option() == "exam") data = db_getExamData(db, req->language());
    vector<Task*> tasks = Tasks_fromStrings(data);
    res->set_context(Tasks_toJson(tasks));
    for(auto task : tasks) delete task;
}



void studentsHandler(Request * req, Response * res, sqlite3* db){
    if(req->option() == "all"){
        vector<string> data = db_getAllStudents(db);
        vector<Student*> studs = Students_fromStrings(data);
        res->set_context(Students_toJson(studs));
        for(auto stud : studs) delete stud;
    } else if(req->option() == "get"){
        string data = db_getStudent(db, req->context());
        Student * st = new Student();
        if(data == "") res->set_status("NOT FOUND");
        else st->fillFromString(data);
        res->set_context(st->toJsonString());
        delete st;
    } else if(req->option() == "set"){
        Student * st = new Student(req->context());
        db_setStudent(db, st);
        delete st;
    } else if(req->option() == "update"){
        Student * st = new Student(req->context());
        db_updateStudent(db, st);
        delete st;
    }
}

void topicsHandler(Request * req, Response * res, sqlite3* db){
    vector<string>data = db_getTopics(db, req->language());
    vector<Topic*> topics = Topics_fromStrings(data);
    res->set_context(Topics_toJson(topics));
    for(auto topic : topics) delete topic;
}
