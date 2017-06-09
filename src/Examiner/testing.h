/**
  * @file
  * @brief Window for user Testing
  *
  */
#ifndef TESTING_H
#define TESTING_H

#include <QMainWindow>
#include <QTimer>
#include <QTextBrowser>
#include <QGridLayout>
#include <QRadioButton>
#include <QLabel>

#include <trainingform.h>
#include <examform.h>
#include <vector>
#include <task.h>
#include <client.h>

/**
 * @brief The TestType enum - enum for Testing
 */
enum class TestType {Training, Exam};

namespace Ui {
class Testing;
}

/**
 * @class Testing
 * @brief The Testing class
 */
class Testing : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief constructor for Testing Window
     * @param type - type of Testing(training or exam)
     * @param parent - parent Widget
     */
    explicit Testing(TestType type, QWidget *parent = 0);

    /**
      *@brief destructor for Testing Window
      */
    ~Testing();

private slots:
    /**
     * @brief activates AnswerButton
     */
    void activateAnswerButton();

    /**
     * @brief initializes Timer in Testing
     */
    void initializeTimer();

    /**
     * @brief defines actions when Timer update
     */
    void onTimerUpdate();

    /**
     * @brief defines actions when user clicked on missButton
     */
    void on_missButton_clicked();

    /**
     * @brief defines actions when user clicked on answerButton
     */
    void on_answerButton_clicked();

    /**
     * @brief defines actions when current tab in tabWidget changed
     * @param index - index of current tab in tabWidget
     */
    void on_tabWidget_currentChanged(int index);

    /**
     * @brief defines actions when Timer elapsed
     */
    void timerElapsed();

    /**
     * @brief showEvent for Testing Window
     * @param event - showEvent
     */
    void showEvent(QShowEvent * event);

    /**
     * @brief closeEvent for Testing Window
     * @param event - closeEvent
     */
    void closeEvent(QCloseEvent * event);

    /**
     * @brief add tasks for testing into tabWidget
     * @param added tasks
     */
    void fillTasksInTabs(vector<Task*>tasks);

    /**
     * @brief load tasks from Server
     */
    void loadTasks();

    /**
     * @brief defines actions when user answered on all questions
     */
    void allQuestionsAnswered();

    /**
     * @brief set time in Timer
     */
    void setTime();

    /**
     * @brief get Student for Exam from ExamForm Dialog
     */
    void getStudentFromExamForm();

    /**
     * @brief set number of right questions into student result
     */
    void setStudentResult();

private:
    /**
     * @brief _type - type of Testing
     */
    TestType _type;

    /**
     * @brief ui
     */
    Ui::Testing *ui;

    /**
     * @brief trainingForm - form for Training mode
     */
    TrainingForm * trainingForm;

    /**
     * @brief examForm - form for Exam mode
     */
    ExamForm * examForm;

    /**
     * @brief time for user testing
     */
    QTime *time = nullptr;

    /**
     * @brief timer that control time
     */
    QTimer * timer = nullptr;

    /**
     * @brief tasks for testing
     */
    vector<Task*> tasks;

    /**
     * @brief client for communication with Server
     */
    Client * client;

    /**
     * @brief Student for exam
     */
    Student * stud = NULL;

    /**
     * @brief mainLayout - layout for tabWidget
     */
    QVBoxLayout *mainLayout;

    /**
     * @brief hLayout - layout for answers and picture
     */
    QHBoxLayout * hLayout;

    /**
     * @brief vLayout - layout for question and explanation
     */
    QVBoxLayout * vLayout;

    /**
     * @brief widget - main Widget in tab
     */
    QWidget * widget;

    /**
     * @brief question - browser to show task question
     */
    QTextBrowser * question = nullptr;

    /**
     * @brief explanations - vector of browsers to show task explanation
     */
    vector<QTextBrowser *> explanations;

    /**
     * @brief answers - vector of vector of RadioButtons to show task answers
     */
    vector<vector<QRadioButton*>> answers;

    /**
     * @brief labels - vector of labels to show task picture
     */
    vector<QLabel*> labels;

    /**
     * @brief task - number of answered tasks
     */
    int task = 0;

    /**
     * @brief rightTask - number of right answered tasks
     */
    int rightTask = 0;
};

#endif // TESTING_H
