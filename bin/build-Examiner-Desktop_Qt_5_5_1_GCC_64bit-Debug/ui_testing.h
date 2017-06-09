/********************************************************************************
** Form generated from reading UI file 'testing.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTING_H
#define UI_TESTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Testing
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *answerLabel;
    QLabel *answersLabel;
    QLabel *emptyLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *timeLabel;
    QLCDNumber *lcdNumber;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QLabel *emptyLabel_2;
    QPushButton *missButton;
    QLabel *emptyLabel_3;
    QPushButton *answerButton;
    QLabel *emptyLabel_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Testing)
    {
        if (Testing->objectName().isEmpty())
            Testing->setObjectName(QStringLiteral("Testing"));
        Testing->resize(682, 535);
        Testing->setStyleSheet(QLatin1String("background-color: rgb(139,233,159);\n"
"color: rgb(85, 13, 57);"));
        centralwidget = new QWidget(Testing);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        answerLabel = new QLabel(centralwidget);
        answerLabel->setObjectName(QStringLiteral("answerLabel"));
        QFont font;
        font.setPointSize(20);
        answerLabel->setFont(font);

        horizontalLayout_3->addWidget(answerLabel);

        answersLabel = new QLabel(centralwidget);
        answersLabel->setObjectName(QStringLiteral("answersLabel"));
        QFont font1;
        font1.setPointSize(22);
        answersLabel->setFont(font1);

        horizontalLayout_3->addWidget(answersLabel);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        emptyLabel = new QLabel(centralwidget);
        emptyLabel->setObjectName(QStringLiteral("emptyLabel"));

        horizontalLayout_4->addWidget(emptyLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        timeLabel = new QLabel(centralwidget);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setFont(font);
        timeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(timeLabel);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);

        horizontalLayout->addWidget(lcdNumber);


        horizontalLayout_4->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_4);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setIconSize(QSize(16, 16));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        emptyLabel_2 = new QLabel(centralwidget);
        emptyLabel_2->setObjectName(QStringLiteral("emptyLabel_2"));

        horizontalLayout_2->addWidget(emptyLabel_2);

        missButton = new QPushButton(centralwidget);
        missButton->setObjectName(QStringLiteral("missButton"));
        missButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout_2->addWidget(missButton);

        emptyLabel_3 = new QLabel(centralwidget);
        emptyLabel_3->setObjectName(QStringLiteral("emptyLabel_3"));

        horizontalLayout_2->addWidget(emptyLabel_3);

        answerButton = new QPushButton(centralwidget);
        answerButton->setObjectName(QStringLiteral("answerButton"));
        answerButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout_2->addWidget(answerButton);

        emptyLabel_4 = new QLabel(centralwidget);
        emptyLabel_4->setObjectName(QStringLiteral("emptyLabel_4"));

        horizontalLayout_2->addWidget(emptyLabel_4);


        verticalLayout->addLayout(horizontalLayout_2);

        Testing->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Testing);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 682, 22));
        Testing->setMenuBar(menubar);
        statusbar = new QStatusBar(Testing);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Testing->setStatusBar(statusbar);

        retranslateUi(Testing);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Testing);
    } // setupUi

    void retranslateUi(QMainWindow *Testing)
    {
        Testing->setWindowTitle(QApplication::translate("Testing", "MainWindow", 0));
        answerLabel->setText(QApplication::translate("Testing", "\320\222\321\226\320\264\320\277\320\276\320\262\321\226\320\264\321\226:", 0));
        answersLabel->setText(QString());
        emptyLabel->setText(QString());
        timeLabel->setText(QApplication::translate("Testing", "\320\247\320\260\321\201:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Testing", "Page", 0));
        emptyLabel_2->setText(QString());
        missButton->setText(QApplication::translate("Testing", "\320\237\321\200\320\276\320\277\321\203\321\201\321\202\320\270\321\202\320\270", 0));
        emptyLabel_3->setText(QString());
        answerButton->setText(QApplication::translate("Testing", "\320\222\321\226\320\264\320\277\320\276\320\262\321\226\321\201\321\202\320\270", 0));
        emptyLabel_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Testing: public Ui_Testing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTING_H
