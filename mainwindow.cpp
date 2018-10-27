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

void MainWindow::on_solveButton_clicked()
{
    QString inputString = ui->inputBox->text();

    char* result = (char*)eval((void*)inputString.toStdString().c_str());

    // Set the result here
    ui->historyBox->append(inputString + " = " + QString(result));
    ui->inputBox->clear();
}


void MainWindow::on_n7_clicked()
{
    ui->inputBox->setText(ui->inputBox->text()+"7");
}

void MainWindow::on_inputBox_returnPressed()
{
    on_solveButton_clicked();
}

void MainWindow::on_clearEverythingButton_clicked()
{
    ui->historyBox->clear();
}

void MainWindow::on_clearButton_clicked()
{
    ui->historyBox->undo();
    ui->inputBox->setText("");
}
