#include "createpuzzle.h"

void createpuzzle::generate_random_puzzle()
{
    // fill in the diagonal boxes of the sudoku first
    fill_diagonals();

    // fill the remainder of the matrix
    fill_remaining(0,3);

    // remove "missing" number of digits
    remove_digits();
}

void createpuzzle::fill_diagonals()
{
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

void createpuzzle::fill_remaining(int start_row, int start_col)
{
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

bool createpuzzle::unused_row(int start_row, int val)
{
    for (int i = 0; i < 9; i++){
        if (matrix[start_row][i] == val) return false;
    }
    return true;
}

bool createpuzzle::unused_col(int start_col, int val)
{
    for (int i = 0; i < 9; i++){
        if (matrix[i][start_col] == val) return false;
    }
    return true;
}

void createpuzzle::remove_digits()
{
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

void createpuzzle::random_sort(int arr[], int n)
{
    srand(time(NULL));
    for (int i = n-1; i > 0; i--){
        int j = rand() % (i+1);
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void createpuzzle::copy_original()
{
    for (int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            original[i][j] = matrix[i][j];
        }
    }
}

int** createpuzzle::get_matrix()
{
    return this->matrix;
}

int** createpuzzle::get_original()
{
    return this->original;
}

void createpuzzle::reset()
{
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            matrix[i][j] = original[i][j];
        }
    }
}

void createpuzzle::free_matrix()
{
    for (int i = 0; i < 9; i++){
        delete this->matrix[i];
        delete this->original[i];
    }
    delete this->matrix;
    delete this->original;
}

void createpuzzle::print_matrix()
{
    for (int i = 0; i < 9; i++){
        if (i%3 == 0 && i != 0)
            cout << "- - - - - - - - - - - - " << endl;
        for (int j = 0; j < 9; j++){
            if (j % 3 == 0 && j != 0){
                cout << " | " ;
            }
            cout << matrix[i][j];
            cout << " " ;
        }
        cout << " " << endl;
    }
}

