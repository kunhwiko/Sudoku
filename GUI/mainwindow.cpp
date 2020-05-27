#include "mainwindow.h"
#include "ui_mainwindow.h"

createpuzzle* cp = new createpuzzle();

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // initialize the board
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            QTableWidgetItem* square = ui->sudoku_board->item(i,j);
            QString str = "";
            str += '0' + cp->get_matrix()[i][j];
            square -> setText(str);
            if (cp->get_matrix()[i][j] == 0){
                QColor c(255,0,0);
                square -> setForeground(c);
            }
        }
    }

    QWidget::setWindowTitle("Sudoku Game");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_sudoku_board_cellClicked(int row, int column)
{
    curr_row = row;
    curr_col = column;
}

void MainWindow::alter_slot(int num)
{
    QTableWidgetItem* cell = ui->sudoku_board->item(curr_row,curr_col);
    cp->get_matrix()[curr_row][curr_col] = num;
    QString str = "";
    str += '0' + cp->get_matrix()[curr_row][curr_col];
    cell -> setText(str);
}

void MainWindow::on_button1_clicked()
{
    alter_slot(1);
}

void MainWindow::on_button2_clicked()
{
   alter_slot(2);
}

void MainWindow::on_button3_clicked()
{
    alter_slot(3);
}

void MainWindow::on_button4_clicked()
{
    alter_slot(4);
}

void MainWindow::on_button5_clicked()
{
    alter_slot(5);
}

void MainWindow::on_button6_clicked()
{
    alter_slot(6);
}

void MainWindow::on_button7_clicked()
{
    alter_slot(7);
}

void MainWindow::on_button8_clicked()
{
    alter_slot(8);
}

void MainWindow::on_button9_clicked()
{
    alter_slot(9);
}

void MainWindow::on_Clear_clicked()
{
    alter_slot(0);
}

void MainWindow::on_Reset_clicked()
{
    cp -> reset();
}
