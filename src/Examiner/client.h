/**
  * @file
  * @brief Client for communication with Server
  */
#ifndef CLIENT_H
#define CLIENT_H

#include <progbase-cpp/net.h>
#include <request.h>
#include <task.h>
#include <student.h>
#include <topic.h>

using namespace progbase::net;

/**
 * @brief The Client class
 */
class Client
{
    /**
     * @enum determines Server Port
     */
    enum { ServerPort = 3000 };

    /**
     * @brief _client - TcpClient to connect with Port
     */
    TcpClient * _client;
public:
    /**
     * @brief default constructor for Client
     */
    Client();

    /**
     * @brief default destructor for CLient
     */
    ~Client();

    /**
     * @brief get topics from Server
     * @param lang - language of topics
     * @return vector of topics that Server send
     */
    vector<Topic*> topics(string lang);

    /**
     * @brief get tasks from Server
     * @param lang - language of tasks
     * @param type - defines tasks assignment
     * @param number - determines specified number of task
     * @return vector of tasks that Server send
     */
    vector<Task*> tasks(string lang, string type = "exam", int number = -1);

    /**
     * @brief get all Students that pass exam from Server
     * @return vector of Students that Server send
     */
    vector<Student*> allStudents();

    /**
     * @brief get specified student by nick
     * @param nick - nickname of student
     * @return student with specified nick
     */
    Student * student(string nick);

    /**
     * @brief set Student into student database
     * @param st - student that sets into database
     */
    void setStudent(Student * st);

    /**
     * @brief update information about specified Student
     * @param st - Student that updates
     */
    void updateStudent(Student * st);
private:
    /**
     * @brief send specified Request on Server
     * @param req - specified Request
     * @return Server Response as string
     */
    string send(Request * req);
};

#endif // CLIENT_H

