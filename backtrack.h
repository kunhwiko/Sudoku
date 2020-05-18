#include <iostream>
#include <tuple>

using namespace std;

class Backtrack{
    private:
    int** board;

    public:
    Backtrack(int** matrix){
        board = matrix;
    }

    private:
    // return coordinates as a tuple form
    tuple<int, int> find_zero(){
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if (board[i][j] == 0)
                    return make_tuple(i,j);
            }
        }
        // row and col -1 when board is full
        return make_tuple(-1,-1);
    }

    bool valid(int num, tuple<int,int> pos){
        int row = get<0>(pos);
        int col = get<1>(pos);

        // validate row
        for (int i = 0; i < 9 ; i++){
            // skip the column we just inserted
            if (board[row][i] == num && col != i)
                return false;
        }
        
        // validate col
        for (int i = 0; i < 9; i++){
            if (board[i][col] == num && row != i)
                return false;
        }

        // validate 3x3 square
        int box_row = row / 3;     // row coordinate of upper left square
        int box_col = col / 3;     // col coordinate of upper left square
        for (int i = box_row; i < box_row+3; i++){
            for (int j = box_col; j < box_col+3; j++){
                if (board[i][j] == num && row != i && col != j)
                    return false;
            }
        }

        return true;
    }

    bool backtracking(){
        tuple<int,int> find_coord = find_zero();

        // once base case is reached, end the backtracking
        if (get<0>(find_coord) == -1)
            return true;

        int row = get<0>(find_coord);
        int col = get<1>(find_coord);
        for (int i = 1; i < 10; i++){
            if (valid(i, find_coord) == true){
                board[row][col] = i;
                if (backtracking() == true) return true;
                board[row][col] = 0;
            }
        }
        return false;
    }
};