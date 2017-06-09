/**
  * @file
  * @brief Module to exec Messages
  */
#ifndef MESSAGE_H
#define MESSAGE_H
#include <QMessageBox>

/**
 * @brief execute Critical Message
 * @param msgBox - QMessageBox to execute
 * @param message - text of QMessageBox
 * @return result of execution
 */
int execCriticalMessage(QMessageBox *msgBox, const QString& message);

/**
 * @brief execute Question Message
 * @param msgBox - QMessageBox to execute
 * @param title - title of QMessageBox
 * @param message - text of QMessageBox
 * @return result of execution
 */
int execQuestionMessage(QMessageBox *msgBox, const QString& title, const QString& message);

/**
 * @brief execute Informative Message
 * @param msgBox - QMessageBox to execute
 * @param title - title if QMessageBox
 * @param message - text of QMessageBox
 * @return  result of execution
 */
int execInfoMessage(QMessageBox *msgBox, const QString& title, const QString& message);

#endif // MESSAGE_H
