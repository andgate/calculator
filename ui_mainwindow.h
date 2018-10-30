/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *historyBox;
    QPushButton *n7;
    QLineEdit *inputBox;
    QPushButton *solveButton;
    QPushButton *n8;
    QPushButton *n9;
    QPushButton *n4;
    QPushButton *n5;
    QPushButton *n6;
    QPushButton *n1;
    QPushButton *n2;
    QPushButton *n3;
    QPushButton *lparen;
    QPushButton *n0;
    QPushButton *rparen;
    QPushButton *addButton;
    QPushButton *subButton;
    QPushButton *mulButton;
    QPushButton *divButton;
    QPushButton *decimalButton;
    QPushButton *powButton;
    QPushButton *clearEverythingButton;
    QPushButton *clearButton;
    QFrame *line_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(260, 391);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        historyBox = new QTextEdit(centralWidget);
        historyBox->setObjectName(QStringLiteral("historyBox"));
        historyBox->setGeometry(QRect(10, 10, 241, 181));
        historyBox->setReadOnly(true);
        n7 = new QPushButton(centralWidget);
        n7->setObjectName(QStringLiteral("n7"));
        n7->setGeometry(QRect(10, 230, 41, 31));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(14);
        n7->setFont(font);
        inputBox = new QLineEdit(centralWidget);
        inputBox->setObjectName(QStringLiteral("inputBox"));
        inputBox->setGeometry(QRect(10, 200, 191, 20));
        inputBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        solveButton = new QPushButton(centralWidget);
        solveButton->setObjectName(QStringLiteral("solveButton"));
        solveButton->setGeometry(QRect(210, 200, 41, 23));
        n8 = new QPushButton(centralWidget);
        n8->setObjectName(QStringLiteral("n8"));
        n8->setGeometry(QRect(60, 230, 41, 31));
        n8->setFont(font);
        n9 = new QPushButton(centralWidget);
        n9->setObjectName(QStringLiteral("n9"));
        n9->setGeometry(QRect(110, 230, 41, 31));
        n9->setFont(font);
        n4 = new QPushButton(centralWidget);
        n4->setObjectName(QStringLiteral("n4"));
        n4->setGeometry(QRect(10, 270, 41, 31));
        n4->setFont(font);
        n5 = new QPushButton(centralWidget);
        n5->setObjectName(QStringLiteral("n5"));
        n5->setGeometry(QRect(60, 270, 41, 31));
        n5->setFont(font);
        n6 = new QPushButton(centralWidget);
        n6->setObjectName(QStringLiteral("n6"));
        n6->setGeometry(QRect(110, 270, 41, 31));
        n6->setFont(font);
        n1 = new QPushButton(centralWidget);
        n1->setObjectName(QStringLiteral("n1"));
        n1->setGeometry(QRect(10, 310, 41, 31));
        n1->setFont(font);
        n2 = new QPushButton(centralWidget);
        n2->setObjectName(QStringLiteral("n2"));
        n2->setGeometry(QRect(60, 310, 41, 31));
        n2->setFont(font);
        n3 = new QPushButton(centralWidget);
        n3->setObjectName(QStringLiteral("n3"));
        n3->setGeometry(QRect(110, 310, 41, 31));
        n3->setFont(font);
        lparen = new QPushButton(centralWidget);
        lparen->setObjectName(QStringLiteral("lparen"));
        lparen->setGeometry(QRect(10, 350, 41, 31));
        lparen->setFont(font);
        n0 = new QPushButton(centralWidget);
        n0->setObjectName(QStringLiteral("n0"));
        n0->setGeometry(QRect(60, 350, 41, 31));
        n0->setFont(font);
        rparen = new QPushButton(centralWidget);
        rparen->setObjectName(QStringLiteral("rparen"));
        rparen->setGeometry(QRect(110, 350, 41, 31));
        rparen->setFont(font);
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(160, 230, 41, 31));
        addButton->setFont(font);
        subButton = new QPushButton(centralWidget);
        subButton->setObjectName(QStringLiteral("subButton"));
        subButton->setGeometry(QRect(160, 270, 41, 31));
        subButton->setFont(font);
        mulButton = new QPushButton(centralWidget);
        mulButton->setObjectName(QStringLiteral("mulButton"));
        mulButton->setGeometry(QRect(160, 310, 41, 31));
        mulButton->setFont(font);
        divButton = new QPushButton(centralWidget);
        divButton->setObjectName(QStringLiteral("divButton"));
        divButton->setGeometry(QRect(160, 350, 41, 31));
        divButton->setFont(font);
        decimalButton = new QPushButton(centralWidget);
        decimalButton->setObjectName(QStringLiteral("decimalButton"));
        decimalButton->setGeometry(QRect(210, 350, 41, 31));
        decimalButton->setFont(font);
        powButton = new QPushButton(centralWidget);
        powButton->setObjectName(QStringLiteral("powButton"));
        powButton->setGeometry(QRect(210, 310, 41, 31));
        powButton->setFont(font);
        clearEverythingButton = new QPushButton(centralWidget);
        clearEverythingButton->setObjectName(QStringLiteral("clearEverythingButton"));
        clearEverythingButton->setGeometry(QRect(210, 270, 41, 31));
        clearEverythingButton->setFont(font);
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setGeometry(QRect(210, 230, 41, 31));
        clearButton->setFont(font);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(140, 230, 31, 151));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        n7->setText(QApplication::translate("MainWindow", "7", 0));
        solveButton->setText(QApplication::translate("MainWindow", "Solve", 0));
        n8->setText(QApplication::translate("MainWindow", "8", 0));
        n9->setText(QApplication::translate("MainWindow", "9", 0));
        n4->setText(QApplication::translate("MainWindow", "4", 0));
        n5->setText(QApplication::translate("MainWindow", "5", 0));
        n6->setText(QApplication::translate("MainWindow", "6", 0));
        n1->setText(QApplication::translate("MainWindow", "1", 0));
        n2->setText(QApplication::translate("MainWindow", "2", 0));
        n3->setText(QApplication::translate("MainWindow", "3", 0));
        lparen->setText(QApplication::translate("MainWindow", "(", 0));
        n0->setText(QApplication::translate("MainWindow", "0", 0));
        rparen->setText(QApplication::translate("MainWindow", ")", 0));
        addButton->setText(QApplication::translate("MainWindow", "+", 0));
        subButton->setText(QApplication::translate("MainWindow", "-", 0));
        mulButton->setText(QApplication::translate("MainWindow", "*", 0));
        divButton->setText(QApplication::translate("MainWindow", "/", 0));
        decimalButton->setText(QApplication::translate("MainWindow", ".", 0));
        powButton->setText(QApplication::translate("MainWindow", "^", 0));
        clearEverythingButton->setText(QApplication::translate("MainWindow", "CE", 0));
        clearButton->setText(QApplication::translate("MainWindow", "C", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
