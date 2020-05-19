/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *button1;
    QPushButton *button3;
    QPushButton *button2;
    QPushButton *button6;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button9;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *Clear;
    QPushButton *Solution;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 354);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button1 = new QPushButton(centralwidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setGeometry(QRect(430, 20, 61, 51));
        button1->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));
        button3 = new QPushButton(centralwidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        button3->setGeometry(QRect(550, 20, 61, 51));
        button3->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));
        button2 = new QPushButton(centralwidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setGeometry(QRect(490, 20, 61, 51));
        button2->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));
        button6 = new QPushButton(centralwidget);
        button6->setObjectName(QString::fromUtf8("button6"));
        button6->setGeometry(QRect(550, 70, 61, 51));
        button6->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));
        button4 = new QPushButton(centralwidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        button4->setGeometry(QRect(430, 70, 61, 51));
        button4->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));
        button5 = new QPushButton(centralwidget);
        button5->setObjectName(QString::fromUtf8("button5"));
        button5->setGeometry(QRect(490, 70, 61, 51));
        button5->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));
        button9 = new QPushButton(centralwidget);
        button9->setObjectName(QString::fromUtf8("button9"));
        button9->setGeometry(QRect(550, 120, 61, 51));
        button9->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));
        button7 = new QPushButton(centralwidget);
        button7->setObjectName(QString::fromUtf8("button7"));
        button7->setGeometry(QRect(430, 120, 61, 51));
        button7->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));
        button8 = new QPushButton(centralwidget);
        button8->setObjectName(QString::fromUtf8("button8"));
        button8->setGeometry(QRect(490, 120, 61, 51));
        button8->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(440, 180, 161, 31));
        Solution = new QPushButton(centralwidget);
        Solution->setObjectName(QString::fromUtf8("Solution"));
        Solution->setGeometry(QRect(440, 240, 161, 31));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(415, 0, 211, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(415, 210, 211, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(405, 10, 21, 211));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(615, 10, 21, 211));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 650, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Solution->setText(QCoreApplication::translate("MainWindow", "Solution", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
