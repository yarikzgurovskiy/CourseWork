/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Result
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *nameLabel;
    QLabel *label_4;
    QLabel *surnameLabel;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *resultLabel;
    QLabel *statusLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *backButton;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName(QStringLiteral("Result"));
        Result->resize(444, 357);
        Result->setStyleSheet(QLatin1String("background-color: rgb(139,233,159);\n"
"color: rgb(85, 13, 57);"));
        centralwidget = new QWidget(Result);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Century Schoolbook L"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        QFont font2;
        font2.setPointSize(14);
        nameLabel->setFont(font2);
        nameLabel->setStyleSheet(QStringLiteral("background-color: rgb(243, 243, 243);"));
        nameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLabel);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        surnameLabel = new QLabel(centralwidget);
        surnameLabel->setObjectName(QStringLiteral("surnameLabel"));
        surnameLabel->setFont(font2);
        surnameLabel->setStyleSheet(QStringLiteral("background-color: rgb(243, 243, 243);"));
        surnameLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, surnameLabel);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        resultLabel = new QLabel(centralwidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        resultLabel->setFont(font2);
        resultLabel->setStyleSheet(QStringLiteral("background-color: rgb(243, 243, 243);"));
        resultLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, resultLabel);

        statusLabel = new QLabel(centralwidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setFont(font2);
        statusLabel->setStyleSheet(QStringLiteral("background-color: rgb(243, 243, 243);"));
        statusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, statusLabel);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout->addWidget(backButton);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout);

        Result->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Result);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 444, 22));
        Result->setMenuBar(menubar);
        statusbar = new QStatusBar(Result);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Result->setStatusBar(statusbar);

        retranslateUi(Result);

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QMainWindow *Result)
    {
        Result->setWindowTitle(QApplication::translate("Result", "MainWindow", 0));
        label->setText(QApplication::translate("Result", "\320\222\320\260\321\210 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", 0));
        label_2->setText(QApplication::translate("Result", "\320\206\320\274'\321\217:", 0));
        nameLabel->setText(QString());
        label_4->setText(QApplication::translate("Result", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265:", 0));
        surnameLabel->setText(QString());
        label_6->setText(QApplication::translate("Result", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", 0));
        label_7->setText(QApplication::translate("Result", "\320\241\320\272\320\273\320\260\320\262:", 0));
        resultLabel->setText(QString());
        statusLabel->setText(QString());
        label_3->setText(QString());
        backButton->setText(QApplication::translate("Result", "\320\224\320\276 \320\263\320\276\320\273\320\276\320\262\320\275\320\276\320\263\320\276 \320\274\320\265\320\275\321\216", 0));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Result: public Ui_Result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
