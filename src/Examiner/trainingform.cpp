#include "trainingform.h"
#include "ui_trainingform.h"

TrainingForm::TrainingForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TrainingForm)
{
    ui->setupUi(this);
    setWindowTitle("Опції для тренування");

    client = new Client();
    topics = client->topics("ukr");
    delete client;
    addTopicsToCombobox(topics);
}

TrainingForm::~TrainingForm()
{
    delete ui;
    for(auto topic : topics) delete topic;
}

void TrainingForm::addTopicsToCombobox(vector<Topic*> topics){
    for(Topic*item : topics){
        ui->comboBox->addItem(QString::number(item->number()) + ". " + QString::fromStdString(item->topic()));
    }
}

void TrainingForm::set_enabled_options(bool selected){
    ui->acceptButton->setEnabled(true);
    //unenable second column
    ui->comboBox->setEnabled(!selected);
    //enable first column
    ui->ticketLabel->setEnabled(selected);
    ui->spinBox->setEnabled(selected);
}


void TrainingForm::on_radioButton_toggled(bool checked)
{
    set_enabled_options(checked);
}

void TrainingForm::on_radioButton_2_toggled(bool checked)
{
    set_enabled_options(!checked);
}





