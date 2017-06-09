/**
  * @file
  * @brief Window for MainMenu
  */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <testing.h>
#include <results.h>
#include <aboutwindow.h>

namespace Ui {
class MainWindow;
}

/**
 * @brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief constructor for MainWindow class
     * @param parent - parent Widget
     */
    explicit MainWindow(QWidget *parent = 0);
    /**
      * @brief destructor for MainWindow class
      */
    ~MainWindow();

private slots:
    /**
     * @brief defines actions when user clicked on examButton
     */
    void on_examButton_clicked();

    /**
     * @brief defines actions when user clicked on trainingButton
     */
    void on_trainingButton_clicked();

    /**
     * @brief defines actions when user clicked on resultsButton
     */
    void on_resultsButton_clicked();

    /**
     * @brief defines actions when action triggered
     */
    void on_action_triggered();

    /**
     * @brief closeEvent for MainWindow
     * @param event - closeEvent
     */
    void closeEvent(QCloseEvent * event);

    /**
     * @brief moves window to center of screen
     */
    void moveToCenter();

private:
    /**
     * @brief ui
     */
    Ui::MainWindow *ui;

    /**
     * @brief testing - Testing Window for user testing
     */
    Testing * testing;

    /**
     * @brief results - Results Window to show Results
     */
    Results * results;

    /**
     * @brief aboutWindow - About Dialog to show information about Program
     */
    AboutWindow * aboutWindow;
};


#endif // MAINWINDOW_H
