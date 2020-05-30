# Sudoku
-----
### Description
Welcome to the Sudoku game! The game implements the following features :)

* Displays a 9x9 sudoku board

  * The board is randomized for every game
  * The user may specify the number of empty slots for the board (default is 25)
  
* Shows the solution to the board

  * Utilizes a backtracking algorithm to solve the board 
  * Solution investigates row, column, and 3x3 square to input a valid number

* Uses a GUI to visually show the board and solution

  * User is able to play a game of sudoku by inputting numbers to empty slots
  * User is able to see how backtracking seeks for a solution
  
### How to use
Coming soon!

### Files
* createpuzzle.h / createpuzzle.cpp

  * C++ header and code that generates a random sudoku board

* mainwindow.h / mainwindow.cpp / mainwindow.ui

  * Uses Qt and C++ to visualize a sudoku board where user can input numbers 
  * Uses Qt and C++ to visualize how backtracking solves the board 
  
* GUI.pro / main.cpp

  * Allows Qt and C++ program to be compiled into a GUI
  
