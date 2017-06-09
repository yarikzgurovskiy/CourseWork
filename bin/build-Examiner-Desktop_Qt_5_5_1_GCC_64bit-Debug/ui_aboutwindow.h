/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *nameLabel;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *manualLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_6;

    void setupUi(QDialog *AboutWindow)
    {
        if (AboutWindow->objectName().isEmpty())
            AboutWindow->setObjectName(QStringLiteral("AboutWindow"));
        AboutWindow->resize(475, 318);
        AboutWindow->setStyleSheet(QLatin1String("background-color: rgb(139,233,159);\n"
"color: rgb(85, 13, 57);"));
        verticalLayout = new QVBoxLayout(AboutWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AboutWindow);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(AboutWindow);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(AboutWindow);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        nameLabel = new QLabel(AboutWindow);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setStyleSheet(QStringLiteral("background-color: rgb(251, 237, 217);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLabel);

        label_4 = new QLabel(AboutWindow);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(AboutWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(251, 237, 217);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, label_5);


        horizontalLayout->addLayout(formLayout);

        label_8 = new QLabel(AboutWindow);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout);

        manualLabel = new QLabel(AboutWindow);
        manualLabel->setObjectName(QStringLiteral("manualLabel"));
        manualLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(manualLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(AboutWindow);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        pushButton = new QPushButton(AboutWindow);
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

        horizontalLayout_2->addWidget(pushButton);

        label_6 = new QLabel(AboutWindow);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(AboutWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), AboutWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutWindow);
    } // setupUi

    void retranslateUi(QDialog *AboutWindow)
    {
        AboutWindow->setWindowTitle(QApplication::translate("AboutWindow", "Dialog", 0));
        label->setText(QApplication::translate("AboutWindow", "\320\225\320\272\320\267\320\260\320\274\320\265\320\275\320\260\321\202\320\276\321\200 \320\237\320\224\320\240", 0));
        label_7->setText(QString());
        label_2->setText(QApplication::translate("AboutWindow", "\320\240\320\276\320\267\321\200\320\276\320\261\320\275\320\270\320\272:", 0));
        nameLabel->setText(QApplication::translate("AboutWindow", "Yaroslav Zghurovskyi", 0));
        label_4->setText(QApplication::translate("AboutWindow", "\320\222\320\265\321\200\321\201\321\226\321\217:", 0));
        label_5->setText(QApplication::translate("AboutWindow", "1.0.0", 0));
        label_8->setText(QString());
        manualLabel->setText(QApplication::translate("AboutWindow", "\320\234\320\260\320\275\321\203\320\260\320\273 \320\264\320\273\321\217 \320\272\320\276\321\200\320\270\321\201\321\202\321\203\320\262\320\260\321\207\320\260", 0));
        label_3->setText(QString());
        pushButton->setText(QApplication::translate("AboutWindow", "\320\224\320\276 \320\263\320\276\320\273\320\276\320\262\320\275\320\276\320\263\320\276 \320\274\320\265\320\275\321\216", 0));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AboutWindow: public Ui_AboutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
