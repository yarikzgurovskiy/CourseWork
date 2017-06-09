/**
  * @file
  * @brief Module to work with post
  */
#ifndef POSTCLIENT_H
#define POSTCLIENT_H
#include <student.h>

/**
 * @brief The PostClient class
 */
class PostClient
{
    /**
     * @brief _email - sender's email
     */
    string _email = "drivingschoolz99@gmail.com";

    /**
     * @brief _password - sender's password
     */
    string _password = "admin1999";

    /**
     * @brief send mail message
     * @param term - term of message
     * @param text - text of message
     * @param email - recipient's email
     */
    void send(string term, string text, string email);
public:
    /**
     * @brief default constructor for PostClient
     */
    PostClient();

    /**
     * @brief constructor for PostClient
     * @param email - sender's email
     * @param password - sender's password
     */
    PostClient(string email, string password);

    /**
      * @brief default destructor for PostClient
      */
    ~PostClient();

    /**
     * @brief send mail about Student Registration on exam
     * @param st - registered student
     */
    void sendRegistrationMail(Student * st);

    /**
     * @brief send mail about exam result
     * @param st - student that takes exam
     */
    void sendResultMail(Student *st);
};

#endif // POSTCLIENT_H
