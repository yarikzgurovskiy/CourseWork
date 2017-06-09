/********************************************************************************
** Form generated from reading UI file 'trainingform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAININGFORM_H
#define UI_TRAININGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TrainingForm
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_2;
    QComboBox *comboBox;
    QLabel *emptyLabel;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ticketLabel;
    QSpinBox *spinBox;
    QLabel *emptyLabel_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *timeLabel;
    QTimeEdit *timeEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *rejectButton;
    QLabel *emptyLabel_2;
    QPushButton *acceptButton;
    QLabel *label_3;

    void setupUi(QDialog *TrainingForm)
    {
        if (TrainingForm->objectName().isEmpty())
            TrainingForm->setObjectName(QStringLiteral("TrainingForm"));
        TrainingForm->setEnabled(true);
        TrainingForm->resize(672, 491);
        TrainingForm->setStyleSheet(QLatin1String("background-color: rgb(139,233,159);\n"
"color: rgb(85, 13, 57);"));
        verticalLayout_6 = new QVBoxLayout(TrainingForm);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(TrainingForm);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButton_2 = new QRadioButton(TrainingForm);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setEnabled(true);
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        radioButton_2->setFont(font1);

        verticalLayout_2->addWidget(radioButton_2);

        comboBox = new QComboBox(TrainingForm);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(251, 237, 217);"));

        verticalLayout_2->addWidget(comboBox);


        verticalLayout_3->addLayout(verticalLayout_2);

        emptyLabel = new QLabel(TrainingForm);
        emptyLabel->setObjectName(QStringLiteral("emptyLabel"));

        verticalLayout_3->addWidget(emptyLabel);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton = new QRadioButton(TrainingForm);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font1);

        verticalLayout->addWidget(radioButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        ticketLabel = new QLabel(TrainingForm);
        ticketLabel->setObjectName(QStringLiteral("ticketLabel"));
        ticketLabel->setStyleSheet(QStringLiteral("background-color: rgb(251, 237, 217);"));

        horizontalLayout_3->addWidget(ticketLabel);

        spinBox = new QSpinBox(TrainingForm);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        QFont font2;
        font2.setPointSize(11);
        spinBox->setFont(font2);
        spinBox->setStyleSheet(QStringLiteral("background-color: rgb(251, 237, 217);"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(100);

        horizontalLayout_3->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        emptyLabel_3 = new QLabel(TrainingForm);
        emptyLabel_3->setObjectName(QStringLiteral("emptyLabel_3"));

        verticalLayout_5->addWidget(emptyLabel_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        timeLabel = new QLabel(TrainingForm);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setFont(font1);

        horizontalLayout_2->addWidget(timeLabel);

        timeEdit = new QTimeEdit(TrainingForm);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setStyleSheet(QStringLiteral("background-color: rgb(251, 237, 217);"));
        timeEdit->setWrapping(false);
        timeEdit->setMinimumTime(QTime(0, 1, 0));
        timeEdit->setCurrentSection(QDateTimeEdit::MinuteSection);
        timeEdit->setTime(QTime(0, 1, 0));

        horizontalLayout_2->addWidget(timeEdit);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(TrainingForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        rejectButton = new QPushButton(TrainingForm);
        rejectButton->setObjectName(QStringLiteral("rejectButton"));
        rejectButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout->addWidget(rejectButton);

        emptyLabel_2 = new QLabel(TrainingForm);
        emptyLabel_2->setObjectName(QStringLiteral("emptyLabel_2"));

        horizontalLayout->addWidget(emptyLabel_2);

        acceptButton = new QPushButton(TrainingForm);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(acceptButton->sizePolicy().hasHeightForWidth());
        acceptButton->setSizePolicy(sizePolicy);
        acceptButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout->addWidget(acceptButton);

        label_3 = new QLabel(TrainingForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout_6->addLayout(horizontalLayout);


        retranslateUi(TrainingForm);
        QObject::connect(rejectButton, SIGNAL(clicked()), TrainingForm, SLOT(reject()));
        QObject::connect(acceptButton, SIGNAL(clicked()), TrainingForm, SLOT(accept()));

        QMetaObject::connectSlotsByName(TrainingForm);
    } // setupUi

    void retranslateUi(QDialog *TrainingForm)
    {
        TrainingForm->setWindowTitle(QApplication::translate("TrainingForm", "Dialog", 0));
        label->setText(QApplication::translate("TrainingForm", "\320\236\320\261\320\265\321\200\321\226\321\202\321\214 \320\275\320\260\320\273\320\260\321\210\321\202\321\203\320\262\320\260\320\275\320\275\321\217 \320\264\320\273\321\217 \321\202\321\200\320\265\320\275\321\203\320\262\320\260\320\275\320\275\321\217:", 0));
        radioButton_2->setText(QApplication::translate("TrainingForm", "\320\236\320\261\321\200\320\260\321\202\320\270 \320\276\320\264\320\275\321\203 \321\202\320\265\320\274\321\203", 0));
        emptyLabel->setText(QString());
        radioButton->setText(QApplication::translate("TrainingForm", "\320\236\320\261\321\200\320\260\321\202\320\270 \320\276\320\264\320\270\320\275 \320\261\321\226\320\273\320\265\321\202", 0));
        ticketLabel->setText(QApplication::translate("TrainingForm", "\320\235\320\276\320\274\320\265\321\200 \320\261\321\226\320\273\320\265\321\202\321\203:", 0));
        spinBox->setSuffix(QApplication::translate("TrainingForm", " \320\261\321\226\320\273\320\265\321\202", 0));
        emptyLabel_3->setText(QString());
        timeLabel->setText(QApplication::translate("TrainingForm", "\320\247\320\260\321\201 \320\275\320\260 \321\202\321\200\320\265\320\275\321\203\320\262\320\260\320\275\320\275\321\217:", 0));
        timeEdit->setDisplayFormat(QApplication::translate("TrainingForm", "mm:ss", 0));
        label_2->setText(QString());
        rejectButton->setText(QApplication::translate("TrainingForm", "\320\224\320\276 \320\263\320\276\320\273\320\276\320\262\320\275\320\276\320\263\320\276 \320\274\320\265\320\275\321\216", 0));
        emptyLabel_2->setText(QString());
        acceptButton->setText(QApplication::translate("TrainingForm", "\320\240\320\276\320\267\320\277\320\276\321\207\320\260\321\202\320\270 \321\202\321\200\320\265\320\275\321\203\320\262\320\260\320\275\320\275\321\217", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TrainingForm: public Ui_TrainingForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAININGFORM_H
