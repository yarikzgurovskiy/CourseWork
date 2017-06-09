/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *examButton;
    QLabel *label_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *trainingButton;
    QLabel *label_5;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QPushButton *resultsButton;
    QLabel *label_7;
    QLabel *label_10;
    QMenuBar *menuBar;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(650, 549);
        MainWindow->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(139,233,159);\n"
"color: rgb(85, 13, 57);"));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(21);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        examButton = new QPushButton(centralWidget);
        examButton->setObjectName(QStringLiteral("examButton"));
        examButton->setMinimumSize(QSize(108, 40));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        font2.setPointSize(17);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        examButton->setFont(font2);
        examButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
"border-width: 0px;\n"
"border-radius: 20%;\n"
"}\n"
"QPushButton {\n"
"border: 4px solid;\n"
"	border-color: rgb(69, 158, 141);\n"
"border-radius: 6px;\n"
"	\n"
"	background-color: rgb(103,210,155);\n"
"min-width: 80px;\n"
"padding: 10px;\n"
"outline: none;\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}"));

        horizontalLayout->addWidget(examButton);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout->addWidget(label_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        trainingButton = new QPushButton(centralWidget);
        trainingButton->setObjectName(QStringLiteral("trainingButton"));
        trainingButton->setMinimumSize(QSize(108, 40));
        QFont font3;
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setWeight(75);
        trainingButton->setFont(font3);
        trainingButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
"border-width: 0px;\n"
"border-radius: 20%;\n"
"}\n"
"QPushButton {\n"
"border: 4px solid;\n"
"	border-color: rgb(69, 158, 141);\n"
"border-radius: 6px;\n"
"	\n"
"	background-color: rgb(103,210,155);\n"
"min-width: 80px;\n"
"padding: 10px;\n"
"outline: none;\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}"));

        horizontalLayout_2->addWidget(trainingButton);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_2);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout->addWidget(label_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        resultsButton = new QPushButton(centralWidget);
        resultsButton->setObjectName(QStringLiteral("resultsButton"));
        resultsButton->setMinimumSize(QSize(108, 40));
        resultsButton->setFont(font3);
        resultsButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
"border-width: 0px;\n"
"border-radius: 20%;\n"
"}\n"
"QPushButton {\n"
"border: 4px solid;\n"
"	border-color: rgb(69, 158, 141);\n"
"border-radius: 6px;\n"
"	\n"
"	background-color: rgb(103,210,155);\n"
"min-width: 80px;\n"
"padding: 10px;\n"
"outline: none;\n"
"}\n"
"\n"
"QPushButton:flat {\n"
"border: none; \n"
"}\n"
"\n"
"QPushButton:default {\n"
"border-color: navy; \n"
"}"));

        horizontalLayout_3->addWidget(resultsButton);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_3);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout->addWidget(label_10);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 650, 22));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_2->menuAction());
        menu_2->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\222\320\260\321\201 \320\262\321\226\321\202\320\260\321\224 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\260 \"\320\225\320\272\320\267\320\260\320\274\320\265\320\275\320\260\321\202\320\276\321\200\"! ", 0));
        label_11->setText(QString());
        label->setText(QString());
        examButton->setText(QApplication::translate("MainWindow", "\320\206\321\201\320\277\320\270\321\202", 0));
        label_2->setText(QString());
        label_8->setText(QString());
        label_3->setText(QString());
        trainingButton->setText(QApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\321\203\320\262\320\260\320\275\320\275\321\217", 0));
        label_5->setText(QString());
        label_9->setText(QString());
        label_6->setText(QString());
        resultsButton->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\270", 0));
        label_7->setText(QString());
        label_10->setText(QString());
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
