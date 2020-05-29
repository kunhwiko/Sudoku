#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTableWidget>
#include <QString>
#include <QTimer>

#include <iostream>
#include <chrono>
#include <thread>
#include "createpuzzle.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sudoku_board_cellClicked(int row, int column);

    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_Clear_clicked();

    void on_Reset_clicked();

    void on_Solution_clicked();

private:
    Ui::MainWindow *ui;
    int curr_row;
    int curr_col;
    void alter_slot(int num);

    tuple<int, int> find_zero();
    bool valid(int num, tuple<int,int> pos);
    bool backtracking();
};
#endif // MAINWINDOW_H
