#include "jsonconverter.h"
#include <jansson.h>

vector<Task*> Tasks_fromJson(string jsonString){
    json_error_t err;
    json_t * jobj = json_loads(jsonString.c_str(), 0, &err);
    json_t * jarr = json_object_get(jobj, "tasks");
    vector<Task*> tasks = {};
    int index = 0;
    json_t * value = NULL;
    json_array_foreach(jarr, index, value) {
        Task * task = new Task();
        task->set_question((char*)json_string_value(json_object_get(value, "question")));
        task->set_answer((char*)json_string_value(json_object_get(value, "answer")));
        task->set_explanation((char*)json_string_value(json_object_get(value, "explanation")));
        task->set_number(json_integer_value(json_object_get(value, "number")));
        task->set_ticket(json_integer_value(json_object_get(value, "ticket")));
        task->set_picture((char*)json_string_value(json_object_get(value, "picture")));
        json_t * answers = json_object_get(value, "answers");
        json_t * val = NULL;
        int i = 0;
        json_array_foreach(answers, i, val){
            task->add_answer((char*)json_string_value(json_array_get(answers, i)));
        }
        tasks.push_back(task);
    }
    json_decref(jobj);
    return tasks;
}


string Tasks_toJson(vector<Task*> tasks){
    json_t * jobj = json_object();
    json_t * jarr = json_array();
    for(Task * task : tasks){
        json_t * tas = json_object();
        json_object_set_new(tas, "number", json_integer(task->number()));
        json_object_set_new(tas, "ticket", json_integer(task->ticket()));
        json_object_set_new(tas, "question", json_string(task->question().c_str()));
        json_object_set_new(tas, "explanation", json_string(task->explanation().c_str()));
        json_object_set_new(tas, "picture", json_string(task->pictureInBase64().c_str()));
        json_object_set_new(tas, "answer", json_string(task->answer().c_str()));
        json_t * arr = json_array();
        for(string ans : task->answers()){
            json_array_append_new(arr, json_string(ans.c_str()));
        }
        json_object_set_new(tas, "answers", arr);
        json_array_append(jarr, tas);
        json_decref(tas);
    }
    json_object_set_new(jobj, "tasks", jarr);
    char * str = json_dumps(jobj, JSON_INDENT(2) | JSON_PRESERVE_ORDER);
    string jsonString(str);
    free(str);
    json_decref(jobj);
    return jsonString;
}

vector<Student*> Students_fromJson(string jsonString){
    json_error_t err;
    json_t * jobj = json_loads(jsonString.c_str(), 0, &err);
    json_t * jarr = json_object_get(jobj, "students");
    vector<Student*> students = {};
    int index = 0;
    json_t * value = NULL;
    json_array_foreach(jarr, index, value) {
        Student * stud = new Student();
        stud->set_name((char*)json_string_value(json_object_get(value, "name")));
        stud->set_surname((char*)json_string_value(json_object_get(value, "surname")));
        stud->set_email((char*)json_string_value(json_object_get(value, "email")));
        stud->set_nick((char*)json_string_value(json_object_get(value, "nick")));
        stud->set_password((char*)json_string_value(json_object_get(value, "password")));
        stud->set_result(json_integer_value(json_object_get(value, "result")));
        stud->set_passed(json_boolean_value(json_object_get(value, "passed")));
        students.push_back(stud);
    }
    json_decref(jobj);
    return students;
}

string Students_toJson(vector<Student*> students){
    json_t * jobj = json_object();
    json_t * jarr = json_array();
    for(Student * stud : students){
        json_t * st = json_object();
        json_object_set_new(st, "name", json_string(stud->name().c_str()));
        json_object_set_new(st, "surname", json_string(stud->surname().c_str()));
        json_object_set_new(st, "nick", json_string(stud->nick().c_str()));
        json_object_set_new(st, "email", json_string(stud->email().c_str()));
        json_object_set_new(st, "password", json_string(stud->password().c_str()));
        json_object_set_new(st, "result", json_integer(stud->result()));
        json_object_set_new(st, "passed", json_boolean(stud->passed()));
        json_array_append(jarr, st);
        json_decref(st);
    }
    json_object_set_new(jobj, "students", jarr);
    char * str = json_dumps(jobj, JSON_INDENT(2) | JSON_PRESERVE_ORDER);
    string jsonString(str);
    free(str);
    json_decref(jobj);
    return jsonString;
}


string Topics_toJson(vector<Topic*> topics){
    json_t * jobj = json_object();
    json_t * jarr = json_array();
    for(Topic * topic : topics){
        json_t * top = json_object();
        json_object_set_new(top, "number", json_integer(topic->number()));
        json_object_set_new(top, "topic", json_string(topic->topic().c_str()));
        json_array_append(jarr, top);
        json_decref(top);
    }
    json_object_set_new(jobj, "topics", jarr);
    char * str = json_dumps(jobj, JSON_INDENT(2) | JSON_PRESERVE_ORDER);
    string jsonString(str);
    free(str);
    json_decref(jobj);
    return jsonString;
}

vector<Topic*> Topics_fromJson(string jsonString){
    json_error_t err;
    json_t * jobj = json_loads(jsonString.c_str(), 0, &err);
    json_t * jarr = json_object_get(jobj, "topics");
    vector<Topic*> topics = {};
    int index = 0;
    json_t * value = NULL;
    json_array_foreach(jarr, index, value) {
        Topic * top = new Topic();
        top->set_number(json_integer_value(json_object_get(value, "number")));
        top->set_topic((char*)json_string_value(json_object_get(value, "topic")));
        topics.push_back(top);
    }
    json_decref(jobj);
    return topics;
}
