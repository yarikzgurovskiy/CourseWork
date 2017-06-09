/**
  * @file
  * @brief Dialog for Training options
  */
#ifndef TRAININGFORM_H
#define TRAININGFORM_H
#include <QDialog>
#include <vector>
#include <topic.h>
#include <client.h>

namespace Ui {
class TrainingForm;
}

/**
 * @brief The TrainingForm class
 */
class TrainingForm : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief constructor for TrainingForm
     * @param parent - parent Widget
     */
    explicit TrainingForm(QWidget *parent = 0);

    /**
      * @brief destructor for TrainingForm
      */
    ~TrainingForm();

private slots:
    /**
     * @brief actions when radioButton toggled
     * @param checked - show that radioButton isChecked
     */
    void on_radioButton_toggled(bool checked);

    /**
     * @brief actions when radioButton_2 toggled
     * @param checked - show that radioButton_2 isChecked
     */
    void on_radioButton_2_toggled(bool checked);

    /**
     * @brief sets enabled and disabled edits in accordance to radioButtons
     * @param checked - show what radioButton is checked
     */
    void set_enabled_options(bool checked);

    /**
     * @brief addTopicsToCombobox
     * @param topics that added to comboBox
     */
    void addTopicsToCombobox(vector<Topic*> topics);

private:
    /**
     * @brief ui
     */
    Ui::TrainingForm *ui;

    /**
     * @brief topics that user can choose
     */
    vector<Topic*> topics;

    /**
     * @brief client for communication with Server
     */
    Client * client;
};

#endif // TRAININGFORM_H
