#include "aboutwindow.h"
#include "ui_aboutwindow.h"
#include <mainwindow.h>

AboutWindow::AboutWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutWindow)
{
    ui->setupUi(this);
    setWindowTitle("Про програму");

    ui->nameLabel->setText("<a href=\"https://www.facebook.com/yaroslav.zghurovskyy\">"
                           "Yaroslav Zghurovskyi</a>");
    ui->nameLabel->setTextFormat(Qt::RichText);
    ui->nameLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->nameLabel->setOpenExternalLinks(true);

    ui->manualLabel->setText("<a href=\"https://github.com/yarikzgurovskiy/HTTP-Server\">"
                             "Мануал для користувача</a>");
    ui->manualLabel->setTextFormat(Qt::RichText);
    ui->manualLabel->setTextInteractionFlags(Qt::TextBrowserInteraction);
    ui->manualLabel->setOpenExternalLinks(true);
}

AboutWindow::~AboutWindow()
{
    delete ui;
}
