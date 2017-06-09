#include "message.h"

int execCriticalMessage(QMessageBox * msgBox, const QString& message){
    msgBox->setText(message);
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox->setIcon(QMessageBox::Critical);
    msgBox->setWindowTitle("Неправильні дані");
    return msgBox->exec();
}

int execQuestionMessage(QMessageBox *msgBox, const QString& title, const QString& message){
    msgBox->setText(message);
    msgBox->setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox->setButtonText(QMessageBox::Yes, "Так");
    msgBox->setButtonText(QMessageBox::No, "Ні");
    msgBox->setWindowTitle(title);
    msgBox->setIcon(QMessageBox::Question);
    return msgBox->exec();
}

int execInfoMessage(QMessageBox *msgBox, const QString& title, const QString& message){
    msgBox->setText(message);
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox->setButtonText(QMessageBox::Ok, "Ок");
    msgBox->setWindowTitle(title);
    msgBox->setIcon(QMessageBox::Information);
    return msgBox->exec();
}

