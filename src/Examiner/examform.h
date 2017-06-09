/**
  * @file
  * @brief Dialog for Exam registration
  */
#ifndef EXAMFORM_H
#define EXAMFORM_H

#include <QDialog>
#include <client.h>

namespace Ui {
class ExamForm;
}

/**
 * @brief The ExamForm class
 */
class ExamForm : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief constructor for ExamForm Dialog
     * @param parent - parent Widget
     */
    explicit ExamForm(QWidget *parent = 0);

    /**
      *@brief destructor for ExamForm Dialog
      */
    ~ExamForm();

private slots:
    /**
     * @brief sets enabled and disabled edits in accordance to radioButtons
     * @param checked - show what radioButton is checked
     */
    void set_enabled_options(bool checked);

    /**
     * @brief actions when logButton toggled
     * @param checked - show that logButton isChecked
     */
    void on_logButton_toggled(bool checked);

    /**
     * @brief actions when regButton toggled
     * @param checked - show that regButton isChecked
     */
    void on_regButton_toggled(bool checked);

    /**
     * @brief actions when current text changed in nameEdit
     * @param arg1 - current text in nameEdit
     */
    void on_nameEdit_textChanged(const QString &arg1);

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

    /**
     * @brief actions when current text changed in surnameEdit
     * @param arg1 - current text in surnameEdit
     */
    void on_surnameEdit_textChanged(const QString &arg1);

    /**
     * @brief actions when current text changed in emailEdit
     * @param arg1 - current text in emailEdit
     */
    void on_emailEdit_textChanged(const QString &arg1);

    /**
     * @brief actions when current text changed in nickEdit_2
     * @param arg1 - current text in nickeEdit_2
     */
    void on_nickEdit_2_textChanged(const QString &arg1);

    /**
     * @brief actions when current text changed in passwordEdit_2
     * @param arg1 - current text in passwordEdit_2
     */
    void on_passwordEdit_2_textChanged(const QString &arg1);

    /**
     * @brief actions when user clicked on examButton
     */
    void on_examButton_clicked();

private:
    /**
     * @brief ui
     */
    Ui::ExamForm *ui;
    /**
     * @brief client for communication with Server
     */
    Client * client;
};

#endif // EXAMFORM_H
