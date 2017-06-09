/**
  * @file
  * @brief Window to show Results
  */
#ifndef RESULTS_H
#define RESULTS_H

#include <QMainWindow>
#include <vector>
#include <student.h>
#include <client.h>
#include <resultsform.h>
#include <result.h>

namespace Ui {
class Results;
}

/**
 * @brief The Results class
 */
class Results : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief constructor for Results
     * @param parent - parent Widget
     */
    explicit Results(QWidget *parent = 0);

    /**
      * @brief destructor for Results
      */
    ~Results();

    /**
     * @brief actions before closeEvent
     * @param event - closeEvent
     */
    void closeEvent(QCloseEvent * event);

    /**
     * @brief actions before showEvent
     * @param event - showEvent
     */
    void showEvent(QShowEvent * event);

private slots:
    /**
     * @brief define actions when user clicked on pushButton
     */
    void on_pushButton_clicked();

    /**
     * @brief load information about Students from Server
     */
    void loadStudents();

    /**
     * @brief add Students to tableWidget
     */
    void addStudentsToTableWidget();

private:
    /**
     * @brief ui
     */
    Ui::Results *ui;

    /**
     * @brief resultsForm - form for Results options
     */
    ResultsForm * resultsForm;

    /**
     * @brief students - vector of Students
     */
    vector<Student *> students;

    /**
     * @brief client for communication with Server
     */
    Client * client;

    /**
     * @brief result - Window for Result of one Student
     */
    Result * result;
};

#endif // RESULTS_H
