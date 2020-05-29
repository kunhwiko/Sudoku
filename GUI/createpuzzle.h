#ifndef CREATEPUZZLE_H
#include <iostream>
#include <random>
#include <vector>
#include <set>

#define CREATEPUZZLE_H
using namespace std;
#endif // CREATEPUZZLE_H

class createpuzzle
{
    private:
        int **matrix;
        int **original;
        int missing;

    public:
        // by default, 25 values are missing
        createpuzzle(){
            matrix = new int*[9];
            original = new int*[9];
            for (int i = 0; i < 9; i++){
                matrix[i] = new int[9];
                original[i] = new int[9];
            }
            missing = 25;
            generate_random_puzzle();
            copy_original();
        }

        // configure number of values that are missing
        createpuzzle(int missing){
            matrix = new int*[9];
            original = new int*[9];
            for (int i = 0; i < 9; i++){
                matrix[i] = new int[9];
                original[i] = new int[9];
            }
            this->missing = missing;
            generate_random_puzzle();
            copy_original();
        }

    private:
        void generate_random_puzzle();
        void fill_diagonals();
        void fill_remaining(int start_row, int start_col);
        bool unused_row(int start_row, int val);
        bool unused_col(int start_col, int val);
        void remove_digits();
        void random_sort(int arr[], int n);
        void copy_original();

    public:
        int** get_matrix();
        int** get_original();
        void reset();
        void free_matrix();
        void print_matrix();
};

