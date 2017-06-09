/********************************************************************************
** Form generated from reading UI file 'resultsform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTSFORM_H
#define UI_RESULTSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResultsForm
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *studentButton;
    QFormLayout *formLayout_2;
    QLabel *nickLabel;
    QLineEdit *nickEdit;
    QLabel *passwordlabel;
    QLineEdit *passwordEdit;
    QVBoxLayout *verticalLayout;
    QRadioButton *teacherButton;
    QFormLayout *formLayout;
    QLabel *passwordlabel_2;
    QLineEdit *passwordEdit_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *backButton;
    QLabel *emptylabel;
    QPushButton *resultsButton;
    QLabel *label_3;

    void setupUi(QDialog *ResultsForm)
    {
        if (ResultsForm->objectName().isEmpty())
            ResultsForm->setObjectName(QStringLiteral("ResultsForm"));
        ResultsForm->resize(594, 296);
        ResultsForm->setStyleSheet(QLatin1String("background-color: rgb(139,233,159);\n"
"color: rgb(85, 13, 57);\n"
"\n"
"\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(ResultsForm);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        studentButton = new QRadioButton(ResultsForm);
        studentButton->setObjectName(QStringLiteral("studentButton"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        studentButton->setFont(font);

        verticalLayout_2->addWidget(studentButton);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        nickLabel = new QLabel(ResultsForm);
        nickLabel->setObjectName(QStringLiteral("nickLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nickLabel);

        nickEdit = new QLineEdit(ResultsForm);
        nickEdit->setObjectName(QStringLiteral("nickEdit"));
        nickEdit->setEnabled(false);
        nickEdit->setStyleSheet(QLatin1String("QLineEdit:disabled{\n"
"		background-color: rgb(186, 189, 182);\n"
"}\n"
" QLineEdit:enabled{\n"
"	\n"
"	background-color: rgb(238, 238, 236);\n"
"}\n"
"\n"
"*[valid=\"true\"]{\n"
"background-color: white;\n"
"border: 2px solid;\n"
"border-color: green;\n"
"}\n"
"\n"
"*[valid=\"false\"]{\n"
"background-color: white;\n"
"border: 2px solid;\n"
"border-color: red;\n"
"}"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nickEdit);

        passwordlabel = new QLabel(ResultsForm);
        passwordlabel->setObjectName(QStringLiteral("passwordlabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, passwordlabel);

        passwordEdit = new QLineEdit(ResultsForm);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));
        passwordEdit->setEnabled(false);
        passwordEdit->setStyleSheet(QLatin1String("QLineEdit:disabled{\n"
"		background-color: rgb(186, 189, 182);\n"
"}\n"
" QLineEdit:enabled{\n"
"	\n"
"	background-color: rgb(238, 238, 236);\n"
"}\n"
"\n"
"*[valid=\"true\"]{\n"
"background-color: white;\n"
"border: 2px solid;\n"
"border-color: green;\n"
"}\n"
"\n"
"*[valid=\"false\"]{\n"
"background-color: white;\n"
"border: 2px solid;\n"
"border-color: red;\n"
"}"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passwordEdit);


        verticalLayout_2->addLayout(formLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        teacherButton = new QRadioButton(ResultsForm);
        teacherButton->setObjectName(QStringLiteral("teacherButton"));
        teacherButton->setFont(font);

        verticalLayout->addWidget(teacherButton);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        passwordlabel_2 = new QLabel(ResultsForm);
        passwordlabel_2->setObjectName(QStringLiteral("passwordlabel_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, passwordlabel_2);

        passwordEdit_2 = new QLineEdit(ResultsForm);
        passwordEdit_2->setObjectName(QStringLiteral("passwordEdit_2"));
        passwordEdit_2->setEnabled(false);
        QFont font1;
        font1.setStrikeOut(false);
        passwordEdit_2->setFont(font1);
        passwordEdit_2->setStyleSheet(QLatin1String("QLineEdit:disabled{\n"
"		background-color: rgb(186, 189, 182);\n"
"}\n"
" QLineEdit:enabled{\n"
"	\n"
"	background-color: rgb(238, 238, 236);\n"
"}\n"
"\n"
"*[valid=\"true\"]{\n"
"background-color: white;\n"
"border: 2px solid green;\n"
"}\n"
"\n"
"*[valid=\"false\"]{\n"
"background-color: white;\n"
"border: 2px solid red;\n"
"}\n"
"\n"
"*[default=\"true\"]{\n"
"background-color: white;\n"
"\n"
"}"));
        passwordEdit_2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, passwordEdit_2);


        verticalLayout->addLayout(formLayout);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        label = new QLabel(ResultsForm);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(204, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(ResultsForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        backButton = new QPushButton(ResultsForm);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
"border-width: 0px;\n"
"border-radius: 20%;\n"
"}\n"
"QPushButton {\n"
"padding: 30px;\n"
"border: 4px solid;\n"
"	border-color: rgb(52, 101, 164);\n"
"border-radius: 6px;\n"
"	background-color: rgb(189, 214, 254);\n"
"	color: rgb(9, 4, 32);\n"
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

        horizontalLayout->addWidget(backButton);

        emptylabel = new QLabel(ResultsForm);
        emptylabel->setObjectName(QStringLiteral("emptylabel"));

        horizontalLayout->addWidget(emptylabel);

        resultsButton = new QPushButton(ResultsForm);
        resultsButton->setObjectName(QStringLiteral("resultsButton"));
        resultsButton->setEnabled(false);
        resultsButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout->addWidget(resultsButton);

        label_3 = new QLabel(ResultsForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(ResultsForm);
        QObject::connect(backButton, SIGNAL(clicked()), ResultsForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(ResultsForm);
    } // setupUi

    void retranslateUi(QDialog *ResultsForm)
    {
        ResultsForm->setWindowTitle(QApplication::translate("ResultsForm", "Dialog", 0));
        studentButton->setText(QApplication::translate("ResultsForm", "\320\257 \321\203\321\207\320\265\320\275\321\214", 0));
        nickLabel->setText(QApplication::translate("ResultsForm", "\320\235\321\226\320\272\320\275\320\265\320\271\320\274:", 0));
        nickEdit->setText(QString());
        nickEdit->setPlaceholderText(QApplication::translate("ResultsForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210 \320\275\321\226\320\272\320\275\320\265\320\271\320\274", 0));
        passwordlabel->setText(QApplication::translate("ResultsForm", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0));
        passwordEdit->setPlaceholderText(QApplication::translate("ResultsForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210 \320\277\320\260\321\200\320\276\320\273\321\214", 0));
        teacherButton->setText(QApplication::translate("ResultsForm", "\320\257 \320\262\321\207\320\270\321\202\320\265\320\273\321\214", 0));
        passwordlabel_2->setText(QApplication::translate("ResultsForm", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0));
        passwordEdit_2->setPlaceholderText(QApplication::translate("ResultsForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214 \320\262\321\207\320\270\321\202\320\265\320\273\321\217", 0));
        label->setText(QString());
        label_2->setText(QString());
        backButton->setText(QApplication::translate("ResultsForm", "\320\224\320\276 \320\263\320\276\320\273\320\276\320\262\320\275\320\276\320\263\320\276 \320\274\320\265\320\275\321\216", 0));
        emptylabel->setText(QString());
        resultsButton->setText(QApplication::translate("ResultsForm", "\320\237\320\265\321\200\320\265\320\263\320\273\321\217\320\275\321\203\321\202\320\270 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\270", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ResultsForm: public Ui_ResultsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTSFORM_H
