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
    ui->inputBox->insert("7");
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

void MainWindow::on_n0_clicked()
{
    ui->inputBox->insert("0");
}

void MainWindow::on_n1_clicked()
{
    ui->inputBox->insert("1");
}

void MainWindow::on_n2_clicked()
{
    ui->inputBox->insert("2");
}

void MainWindow::on_n3_clicked()
{
    ui->inputBox->insert("3");
}

void MainWindow::on_addButton_clicked()
{
    ui->inputBox->insert("+");
}

void MainWindow::on_subButton_clicked()
{
    ui->inputBox->insert("-");
}

void MainWindow::on_mulButton_clicked()
{
    ui->inputBox->insert("*");
}

void MainWindow::on_divButton_clicked()
{
    ui->inputBox->insert("/");
}

void MainWindow::on_powButton_clicked()
{
    ui->inputBox->insert("^");
}

void MainWindow::on_decimalButton_clicked()
{
    ui->inputBox->insert(".");
}

void MainWindow::on_lparen_clicked()
{
    ui->inputBox->insert("(");
}

void MainWindow::on_rparen_clicked()
{
    ui->inputBox->insert(")");
}

void MainWindow::on_n4_clicked()
{
    ui->inputBox->insert("4");
}

void MainWindow::on_n5_clicked()
{
    ui->inputBox->insert("5");
}

void MainWindow::on_n6_clicked()
{
    ui->inputBox->insert("6");
}

void MainWindow::on_n8_clicked()
{
    ui->inputBox->insert("8");
}

void MainWindow::on_n9_clicked()
{
    ui->inputBox->insert("9");
}
