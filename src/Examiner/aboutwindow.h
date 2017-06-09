/**
  * @file
  * @brief Window to show info about program
  */
#ifndef ABOUTWINDOW_H
#define ABOUTWINDOW_H

#include <QDialog>

namespace Ui {
class AboutWindow;
}

/**
 * @brief The AboutWindow class
 */
class AboutWindow : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief constructor for AboutWindow
     * @param parent - parent Widget
     */
    explicit AboutWindow(QWidget *parent = 0);

    /**
      * @brief destructor for AboutWindow
      */
    ~AboutWindow();

private:
    /**
     * @brief ui
     */
    Ui::AboutWindow *ui;
};

#endif // ABOUTWINDOW_H
