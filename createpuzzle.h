#include <iostream>
#include <random>
#include <vector>
#include <set>

using namespace std;

class CreatePuzzle{
    private:
    int **matrix;
    int missing;

    // by default, 25 values are missing
    public:
    CreatePuzzle(){
        matrix = new int*[9];
        for (int i = 0; i < 9; i++){
            matrix[i] = new int[9];
        }
        missing = 25;
        generate_random_puzzle();
    }

    // configure number of values that are missing
    CreatePuzzle(int missing){
        matrix = new int*[9];
        for (int i = 0; i < 9; i++){
            matrix[i] = new int[9];
        }
        this->missing = missing; 
        generate_random_puzzle();
    }

    private:
    void generate_random_puzzle(){
        // fill in the diagonal boxes of the sudoku first 
        fill_diagonals();

        // fill the remainder of the matrix
        fill_remaining(0,3);

        // remove "missing" number of digits
        remove_digits();
    }

    void fill_diagonals(){
        for (int i = 0; i < 3; i++){
            int nums[] = {1,2,3,4,5,6,7,8,9};
            random_sort(nums,sizeof(nums)/sizeof(nums[0]));
            int index = 0;
            for (int row = 3*i; row < 3*i + 3; row++){
                for (int col = 3*i; col < 3*i + 3; col++){
                    matrix[row][col] = nums[index];
                    index++;
                }
            }
        }
    }

    void fill_remaining(int start_row, int start_col){
        // board is all filled
        int row = start_row;
        int col = start_col;
        if (row == 6 && col == 6){
            return;
        }
        // diagonals are already filled
        else if (row == 3 && col == 3){
            col += 3;
        }
        // move to next row 
        else if (start_col >= 9){
            row += 3;
            col = 0;
        }

        // numbers sorted randomly to insert into sudoku
        int nums[] = {1,2,3,4,5,6,7,8,9};
        random_sort(nums,sizeof(nums)/sizeof(nums[0]));

        // if an index has already been visited, we do not visit
        set<int> used_indices; 
        int index = 0;

        // fill in a 3x3 part of the board
        for (int i = row; i < row+3; i++){
            for (int j = col; j < col+3; j++){
                // continue until a value not within the row and col is found
                while (unused_row(i, nums[index]) == false || unused_col(j,nums[index]) == false){
                    // move to next number, or move further if the number is already used in the 3x3 square
                    // if at the final index, start from beginning of nums vector
                    index++;
                    index %= 9;
                    while (used_indices.find(index) != used_indices.end())
                        index++;
                        index %= 9;
                }
                matrix[i][j] = nums[index];
                index++;
                index %= 9;
            }
        }
        // recursively fill in remainder of the board
        fill_remaining(row,col+3);
    }

    // check if duplicate value does not exist in row
    bool unused_row (int start_row, int val){
        for (int i = 0; i < 9; i++){
            if (matrix[start_row][i] == val) return false;
        }
        return true;
    }

    // check if duplicate value does not exist in col
    bool unused_col (int start_col, int val){
        for (int i = 0; i < 9; i++){
            if (matrix[i][start_col] == val) return false;
        }
        return true;
    }

    void remove_digits(){
        int number_to_delete = missing;
        while (number_to_delete > 0){
            int rand_row = rand()%8 ;
            int rand_col = rand()%8 ;

            if (matrix[rand_row][rand_col] == 0)
                continue;
            matrix[rand_row][rand_col] = 0;
            number_to_delete--;
        }
    }
};