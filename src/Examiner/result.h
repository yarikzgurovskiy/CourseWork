/**
  * @file
  * @brief Window to show Student result
  */
#ifndef RESULT_H
#define RESULT_H

#include <QMainWindow>
#include <student.h>

namespace Ui {
class Result;
}

/**
 * @brief The Result class
 */
class Result : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief constructor for Result
     * @param st - Student whose result is displayed
     * @param parent - parent Widget
     */
    explicit Result(Student * st, QWidget *parent = 0);

    /**
      * @brief destructor for Result
      */
    ~Result();

    /**
     * @brief defines actions after cloesEvent
     * @param event - closeEvent
     */
    void closeEvent(QCloseEvent * event);

private slots:
    /**
     * @brief defines actions when user clicked on backButton
     */
    void on_backButton_clicked();

    /**
     * @brief fills out a form about the student
     */
    void fillStudentForm();

private:
    /**
     * @brief ui
     */
    Ui::Result *ui;

    /**
     * @brief _stud - Student whose result is displayed
     */
    Student * _stud;
};

#endif // RESULT_H
