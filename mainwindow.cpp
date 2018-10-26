#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "eval_stub.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    HsStart();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    HsEnd();
    delete ui;
}

void MainWindow::on_eqButton_clicked()
{
    QString inputString = ui->inputBox->text();


    char* result = (char*)eval((void*)inputString.toStdString().c_str());

    // Set the result here
    ui->inputBox->setText(QString(result));
}
