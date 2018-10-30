#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_solveButton_clicked();
    void on_n7_clicked();

    void on_inputBox_returnPressed();

    void on_clearEverythingButton_clicked();

    void on_clearButton_clicked();

    void on_n0_clicked();

    void on_n1_clicked();

    void on_n2_clicked();

    void on_n3_clicked();

    void on_addButton_clicked();

    void on_subButton_clicked();

    void on_mulButton_clicked();

    void on_divButton_clicked();

    void on_powButton_clicked();

    void on_decimalButton_clicked();

    void on_lparen_clicked();

    void on_rparen_clicked();

    void on_n4_clicked();

    void on_n5_clicked();

    void on_n6_clicked();

    void on_n8_clicked();

    void on_n9_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
