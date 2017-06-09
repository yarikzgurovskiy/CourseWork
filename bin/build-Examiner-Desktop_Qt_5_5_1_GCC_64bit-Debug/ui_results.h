/********************************************************************************
** Form generated from reading UI file 'results.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTS_H
#define UI_RESULTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Results
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Results)
    {
        if (Results->objectName().isEmpty())
            Results->setObjectName(QStringLiteral("Results"));
        Results->resize(534, 367);
        Results->setStyleSheet(QLatin1String("background-color: rgb(139,233,159);\n"
"color: rgb(85, 13, 57);"));
        centralwidget = new QWidget(Results);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
"	border-width: 0px;\n"
"	border-radius: 20%;\n"
"}\n"
"QPushButton {\n"
"	border: 4px solid;\n"
"	border-color: rgb(52, 101, 164);\n"
"	border-radius: 6px;\n"
"	background-color: rgb(189, 214, 254);\n"
"	color: rgb(9, 4, 32);\n"
"	padding: 10px;\n"
"	outline: none;\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"	border: none; \n"
"}\n"
"\n"
"QPushButton:default {\n"
"border-color: rgb(92, 53, 102);\n"
"}\n"
"\n"
"QPushButton:disabled{\n"
"background-color: rgb(211, 215, 207);\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        Results->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Results);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 534, 22));
        Results->setMenuBar(menubar);
        statusbar = new QStatusBar(Results);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Results->setStatusBar(statusbar);

        retranslateUi(Results);

        QMetaObject::connectSlotsByName(Results);
    } // setupUi

    void retranslateUi(QMainWindow *Results)
    {
        Results->setWindowTitle(QApplication::translate("Results", "MainWindow", 0));
        label->setText(QString());
        pushButton->setText(QApplication::translate("Results", "\320\224\320\276 \320\263\320\276\320\273\320\276\320\262\320\275\320\276\320\263\320\276 \320\274\320\265\320\275\321\216", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Results: public Ui_Results {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTS_H
