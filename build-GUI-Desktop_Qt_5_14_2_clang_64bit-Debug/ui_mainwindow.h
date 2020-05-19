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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QFrame *line;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *Clear;
    QFrame *line_2;
    QPushButton *Solution;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(650, 354);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 2, 5);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 0, 6, 1);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 1, 5, 5, 1);

        button1 = new QPushButton(centralwidget);
        button1->setObjectName(QString::fromUtf8("button1"));
        button1->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));

        gridLayout->addWidget(button1, 2, 2, 1, 1);

        button2 = new QPushButton(centralwidget);
        button2->setObjectName(QString::fromUtf8("button2"));
        button2->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));

        gridLayout->addWidget(button2, 2, 3, 1, 1);

        button3 = new QPushButton(centralwidget);
        button3->setObjectName(QString::fromUtf8("button3"));
        button3->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));

        gridLayout->addWidget(button3, 2, 4, 1, 1);

        button4 = new QPushButton(centralwidget);
        button4->setObjectName(QString::fromUtf8("button4"));
        button4->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));

        gridLayout->addWidget(button4, 3, 2, 1, 1);

        button5 = new QPushButton(centralwidget);
        button5->setObjectName(QString::fromUtf8("button5"));
        button5->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));

        gridLayout->addWidget(button5, 3, 3, 1, 1);

        button6 = new QPushButton(centralwidget);
        button6->setObjectName(QString::fromUtf8("button6"));
        button6->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));

        gridLayout->addWidget(button6, 3, 4, 1, 1);

        button7 = new QPushButton(centralwidget);
        button7->setObjectName(QString::fromUtf8("button7"));
        button7->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));

        gridLayout->addWidget(button7, 4, 2, 1, 1);

        button8 = new QPushButton(centralwidget);
        button8->setObjectName(QString::fromUtf8("button8"));
        button8->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));

        gridLayout->addWidget(button8, 4, 3, 1, 1);

        button9 = new QPushButton(centralwidget);
        button9->setObjectName(QString::fromUtf8("button9"));
        button9->setStyleSheet(QString::fromUtf8("background-color : white;\n"
"border : 1px solid gray;"));

        gridLayout->addWidget(button9, 4, 4, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));

        gridLayout->addWidget(Clear, 5, 2, 1, 3);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 6, 1, 1, 5);

        Solution = new QPushButton(centralwidget);
        Solution->setObjectName(QString::fromUtf8("Solution"));

        gridLayout->addWidget(Solution, 7, 2, 1, 3);

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
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Solution->setText(QCoreApplication::translate("MainWindow", "Solution", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
