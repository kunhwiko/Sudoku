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
};