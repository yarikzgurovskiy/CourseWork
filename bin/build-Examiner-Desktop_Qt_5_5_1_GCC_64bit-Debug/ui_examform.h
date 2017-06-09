/********************************************************************************
** Form generated from reading UI file 'examform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMFORM_H
#define UI_EXAMFORM_H

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

class Ui_ExamForm
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *logButton;
    QFormLayout *formLayout_2;
    QLabel *nickLabel;
    QLineEdit *nickEdit;
    QLabel *passwordlabel;
    QLineEdit *passwordEdit;
    QVBoxLayout *verticalLayout;
    QRadioButton *regButton;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *surnameLabel;
    QLineEdit *surnameEdit;
    QLabel *emailLabel;
    QLineEdit *emailEdit;
    QLabel *nickLabel_2;
    QLineEdit *nickEdit_2;
    QLabel *passwordlabel_2;
    QLineEdit *passwordEdit_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *backButton;
    QLabel *emptyLabel;
    QPushButton *examButton;
    QLabel *label_3;

    void setupUi(QDialog *ExamForm)
    {
        if (ExamForm->objectName().isEmpty())
            ExamForm->setObjectName(QStringLiteral("ExamForm"));
        ExamForm->resize(639, 368);
        ExamForm->setStyleSheet(QLatin1String("background-color: rgb(139,233,159);\n"
"color: rgb(85, 13, 57);"));
        verticalLayout_6 = new QVBoxLayout(ExamForm);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        logButton = new QRadioButton(ExamForm);
        logButton->setObjectName(QStringLiteral("logButton"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        logButton->setFont(font);

        verticalLayout_2->addWidget(logButton);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        nickLabel = new QLabel(ExamForm);
        nickLabel->setObjectName(QStringLiteral("nickLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nickLabel);

        nickEdit = new QLineEdit(ExamForm);
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

        passwordlabel = new QLabel(ExamForm);
        passwordlabel->setObjectName(QStringLiteral("passwordlabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, passwordlabel);

        passwordEdit = new QLineEdit(ExamForm);
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


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        regButton = new QRadioButton(ExamForm);
        regButton->setObjectName(QStringLiteral("regButton"));
        regButton->setFont(font);

        verticalLayout->addWidget(regButton);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        nameLabel = new QLabel(ExamForm);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(ExamForm);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setEnabled(false);
        nameEdit->setStyleSheet(QLatin1String("QLineEdit:disabled{\n"
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

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        surnameLabel = new QLabel(ExamForm);
        surnameLabel->setObjectName(QStringLiteral("surnameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, surnameLabel);

        surnameEdit = new QLineEdit(ExamForm);
        surnameEdit->setObjectName(QStringLiteral("surnameEdit"));
        surnameEdit->setEnabled(false);
        surnameEdit->setStyleSheet(QLatin1String("QLineEdit:disabled{\n"
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

        formLayout->setWidget(1, QFormLayout::FieldRole, surnameEdit);

        emailLabel = new QLabel(ExamForm);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, emailLabel);

        emailEdit = new QLineEdit(ExamForm);
        emailEdit->setObjectName(QStringLiteral("emailEdit"));
        emailEdit->setEnabled(false);
        emailEdit->setStyleSheet(QLatin1String("QLineEdit:disabled{\n"
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

        formLayout->setWidget(2, QFormLayout::FieldRole, emailEdit);

        nickLabel_2 = new QLabel(ExamForm);
        nickLabel_2->setObjectName(QStringLiteral("nickLabel_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, nickLabel_2);

        nickEdit_2 = new QLineEdit(ExamForm);
        nickEdit_2->setObjectName(QStringLiteral("nickEdit_2"));
        nickEdit_2->setEnabled(false);
        nickEdit_2->setStyleSheet(QLatin1String("QLineEdit:disabled{\n"
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

        formLayout->setWidget(3, QFormLayout::FieldRole, nickEdit_2);

        passwordlabel_2 = new QLabel(ExamForm);
        passwordlabel_2->setObjectName(QStringLiteral("passwordlabel_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, passwordlabel_2);

        passwordEdit_2 = new QLineEdit(ExamForm);
        passwordEdit_2->setObjectName(QStringLiteral("passwordEdit_2"));
        passwordEdit_2->setEnabled(false);
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
"border: 2px solid;\n"
"border-color: green;\n"
"}\n"
"\n"
"*[valid=\"false\"]{\n"
"background-color: white;\n"
"border: 2px solid;\n"
"border-color: red;\n"
"}"));
        passwordEdit_2->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, passwordEdit_2);


        verticalLayout->addLayout(formLayout);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout);

        label = new QLabel(ExamForm);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(204, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(ExamForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        backButton = new QPushButton(ExamForm);
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

        horizontalLayout_2->addWidget(backButton);

        emptyLabel = new QLabel(ExamForm);
        emptyLabel->setObjectName(QStringLiteral("emptyLabel"));

        horizontalLayout_2->addWidget(emptyLabel);

        examButton = new QPushButton(ExamForm);
        examButton->setObjectName(QStringLiteral("examButton"));
        examButton->setEnabled(false);
        examButton->setStyleSheet(QLatin1String("QPushButton:hover{\n"
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

        horizontalLayout_2->addWidget(examButton);

        label_3 = new QLabel(ExamForm);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_5);


        retranslateUi(ExamForm);
        QObject::connect(backButton, SIGNAL(clicked()), ExamForm, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExamForm);
    } // setupUi

    void retranslateUi(QDialog *ExamForm)
    {
        ExamForm->setWindowTitle(QApplication::translate("ExamForm", "Dialog", 0));
        logButton->setText(QApplication::translate("ExamForm", "\320\257 \320\262\320\266\320\265 \320\267\320\260\321\200\320\265\321\224\321\201\321\202\321\200\320\276\320\262\320\260\320\275\320\270\320\271", 0));
        nickLabel->setText(QApplication::translate("ExamForm", "\320\235\321\226\320\272\320\275\320\265\320\271\320\274:", 0));
        nickEdit->setPlaceholderText(QApplication::translate("ExamForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210 \320\275\321\226\320\272\320\275\320\265\320\271\320\274", 0));
        passwordlabel->setText(QApplication::translate("ExamForm", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0));
        passwordEdit->setPlaceholderText(QApplication::translate("ExamForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210 \320\277\320\260\321\200\320\276\320\273\321\214", 0));
        regButton->setText(QApplication::translate("ExamForm", "\320\257 \321\201\320\272\320\273\320\260\320\264\320\260\321\216 \321\226\321\201\320\277\320\270\321\202 \320\262\320\277\320\265\321\200\321\210\320\265", 0));
        nameLabel->setText(QApplication::translate("ExamForm", "\320\206\320\274'\321\217:", 0));
        nameEdit->setPlaceholderText(QApplication::translate("ExamForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210\320\265 \321\226\320\274'\321\217", 0));
        surnameLabel->setText(QApplication::translate("ExamForm", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265:", 0));
        surnameEdit->setPlaceholderText(QApplication::translate("ExamForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210\320\265 \320\277\321\200\321\226\320\267\320\262\320\270\321\211\320\265", 0));
        emailLabel->setText(QApplication::translate("ExamForm", "Email :", 0));
        emailEdit->setPlaceholderText(QApplication::translate("ExamForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210  email", 0));
        nickLabel_2->setText(QApplication::translate("ExamForm", "\320\235\321\226\320\272\320\275\320\265\320\271\320\274:", 0));
        nickEdit_2->setPlaceholderText(QApplication::translate("ExamForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210 \320\275\321\226\320\272\320\275\320\265\320\271\320\274", 0));
        passwordlabel_2->setText(QApplication::translate("ExamForm", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0));
        passwordEdit_2->setPlaceholderText(QApplication::translate("ExamForm", "\320\222\320\262\320\265\320\264\321\226\321\202\321\214 \320\262\320\260\321\210 \320\277\320\260\321\200\320\276\320\273\321\214", 0));
        label->setText(QString());
        label_2->setText(QString());
        backButton->setText(QApplication::translate("ExamForm", "\320\224\320\276 \320\263\320\276\320\273\320\276\320\262\320\275\320\276\320\263\320\276 \320\274\320\265\320\275\321\216", 0));
        emptyLabel->setText(QString());
        examButton->setText(QApplication::translate("ExamForm", "\320\240\320\276\320\267\320\277\320\276\321\207\320\260\321\202\320\270 \321\226\321\201\320\277\320\270\321\202", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExamForm: public Ui_ExamForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMFORM_H
