#include "mainwindow.h"
#include "ui_mainwindow.h"

createpuzzle* cp = new createpuzzle();
int a = 0;

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
    if (cp->get_original()[curr_row][curr_col] == 0){
        QTableWidgetItem* cell = ui->sudoku_board->item(curr_row,curr_col);
        cp->get_matrix()[curr_row][curr_col] = num;
        QString str = "";
        str += '0' + cp->get_matrix()[curr_row][curr_col];
        cell -> setText(str);
    }
    repaint();
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
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            QTableWidgetItem* square = ui->sudoku_board->item(i,j);
            QString str = "";
            str += '0' + cp->get_matrix()[i][j];
            square -> setText(str);
        }
    }
    repaint();
}

void MainWindow::on_Solution_clicked()
{
    backtracking();
    repaint();
}

tuple<int,int> MainWindow::find_zero()
{
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if (cp->get_matrix()[i][j] == 0)
                return make_tuple(i,j);
        }
    }
    // row and col -1 when board is full
    return make_tuple(-1,-1);
}

bool MainWindow::valid(int num, tuple<int,int> pos){

    int row = get<0>(pos);
    int col = get<1>(pos);

    // validate row
    for (int i = 0; i < 9 ; i++){
        // skip the column we just inserted
        if (cp->get_matrix()[row][i] == num && col != i)
            return false;
    }

    // validate col
    for (int i = 0; i < 9; i++){
        if (cp->get_matrix()[i][col] == num && row != i)
            return false;
    }

    // validate 3x3 square
    int box_row = row / 3;     // row coordinate of upper left square
    int box_col = col / 3;     // col coordinate of upper left square
    for (int i = 3*box_row; i < 3*box_row+3; i++){
        for (int j = 3*box_col; j < 3*box_col+3; j++){
            if (cp->get_matrix()[i][j] == num && row != i && col != j)
                return false;
        }
    }

    return true;
}

bool MainWindow::backtracking(){  
    tuple<int,int> find_coord = MainWindow::find_zero();

    // once base case is reached, end the backtracking
    if (get<0>(find_coord) == -1)
        return true;

    int row = get<0>(find_coord);
    int col = get<1>(find_coord);
    for (int i = 1; i < 10; i++){
        if (MainWindow::valid(i, find_coord) == true){
            cp->get_matrix()[row][col] = i;

            QTableWidgetItem* square = ui->sudoku_board->item(row,col);
            QString str = "";
            str += '0' + cp->get_matrix()[row][col];
            square -> setText(str);
            update();
            std::this_thread::sleep_for(std::chrono::milliseconds(200));
            qApp -> processEvents();

            if (MainWindow::backtracking() == true) return true;
            cp->get_matrix()[row][col] = 0;
        }
    }
    return false;
}


