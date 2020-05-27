#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createpuzzle* cp = new createpuzzle();

    // initialize the board
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            QTableWidgetItem* square = ui->sudoku_board->item(i,j);
            QString str = "";
            str += '0' + cp->get_matrix()[i][j];
            square -> setText(str);
        }
    }

    QWidget::setWindowTitle("Sudoku Game");
}

MainWindow::~MainWindow()
{
    delete ui;
}

