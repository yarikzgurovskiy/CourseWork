/**
  * @file
  * @brief Dialog for Result options
  */
#ifndef RESULTSFORM_H
#define RESULTSFORM_H

#include <QDialog>
#include <client.h>
#include <QLineEdit>

namespace Ui {
class ResultsForm;
}

/**
 * @brief The ResultsForm class
 */
class ResultsForm : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief constructor for ResultsForm
     * @param parent - parent Widget
     */
    explicit ResultsForm(QWidget *parent = 0);

    /**
      * @brief destructor for ResultsForm
      */
    ~ResultsForm();


private slots:

    /**
     * @brief actions when studentButton toggled
     * @param checked - show that studentButton isChecked
     */
    void on_studentButton_toggled(bool checked);

    /**
     * @brief actions when teacherButton toggled
     * @param checked - show that teacherButton isChecked
     */
    void on_teacherButton_toggled(bool checked);

    /**
     * @brief sets enabled and disabled edits in accordance to radioButtons
     * @param checked - show what radioButton is checked
     */
    void set_enabled_options(bool selected);

    /**
     * @brief defines actions when user clicked resultsButton
     */
    void on_resultsButton_clicked();

    /**
     * @brief actions when current text changed in passwordEdit_2
     * @param arg1 - current text in passwordEdit_2
     */
    void on_passwordEdit_2_textChanged(const QString &arg1);

    /**
     * @brief actions when current text changed in nickEdit
     * @param arg1 - current text in nickEdit
     */
    void on_nickEdit_textChanged(const QString &arg1);

    /**
     * @brief actions when current text changed in passwordEdit
     * @param arg1 - current text in passwordEdit
     */
    void on_passwordEdit_textChanged(const QString &arg1);

public slots:
    /**
     * @brief update edit after setProperty
     * @param edit that updated
     */
    static void updateEdit(QLineEdit * lineEdit);

private:
    /**
     * @brief ui
     */
    Ui::ResultsForm *ui;

    /**
     * @brief client for communication with Server
     */
    Client * client;

    /**
     * @brief admin password to call Results Window
     */
    string adminPass = "admin1999";
};

#endif // RESULTSFORM_H
