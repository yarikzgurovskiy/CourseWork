#include "converter.h"
#include <fstream>
#include <base64.h>

#define PICFOLDER "../../data/database/pics/"

vector<Task*> Tasks_fromStrings(vector<string> data){
    vector<Task*> tasks = {};
    for(string str : data){
        Task * task = new Task();
        int i = 1;
        int j = 0;
        char ch = '\0';
        char prevCh = '\0';
        string key;
        string value;
        int answer = 0;
        while(str[i]){
            ch = str[i];
            prevCh = str[i - 1];
            if(ch == ':' && prevCh == ':'){
                key = string(str, j, i - j - 1);
                j = i + 1;
            }
            if(ch == '|'){
                value = string(str, j, i - j);
                j = i + 1;
                if(key == "answers"){
                    //parse answers
                    unsigned int k = 0;
                    int m = 0;
                    while(value[k]){
                        if(value[k] == '/' || k == value.size() - 1){
                            string ans = string(value, m, k - m);
                            m = k + 1;
                            task->add_answer(ans);
                        }
                        k++;
                    }
                } else if(key == "path"){
                    //convert image to base64
                    ifstream file(PICFOLDER + value, ifstream::binary);
                    vector<char>img((istreambuf_iterator<char>(file)),istreambuf_iterator<char>());
                    string image = base64_encode((unsigned char*)&img[0], (unsigned int)img.size());
                    task->set_picture(image);
                } else if(key == "question") task->set_question(value);
                else if(key == "explanation") task->set_explanation(value);
                else if(key == "id"){
                    int id = stoi(value);
                    task->set_ticket(id / 100);
                    task->set_number(id % 100);
                }
                else if(key == "answer") answer = stoi(value) - 1;
            }
            i++;
        }
        task->set_answer(task->answers()[answer]);
        tasks.push_back(task);
    }
    return tasks;
}

#undef PICFOLDER


vector<Student*> Students_fromStrings(vector<string> data){
    vector<Student*> studs = {};
    for(string str : data){
        Student * st = new Student();
        st->fillFromString(str);
        studs.push_back(st);
    }
    return studs;
}
vector<Topic*> Topics_fromStrings(vector<string> data){
    vector<Topic*> topics = {};
    for(string str : data){
        Topic * topic = new Topic();
        int i = 1;
        int j = 0;
        char ch = '\0';
        char prevCh = '\0';
        string key;
        string value;
        while(str[i]){
            ch = str[i];
            prevCh = str[i - 1];
            if(ch == ':' && prevCh == ':'){
                key = string(str, j, i - j - 1);
                j = i + 1;
            }
            if(ch == '|'){
                value = string(str, j, i - j);
                j = i + 1;
                if(key == "id") topic->set_number(stoi(value));
                else if(key == "ukr" || key == "rus") topic->set_topic(value);
            }
            i++;
        }
        topics.push_back(topic);
    }
    return topics;
}

