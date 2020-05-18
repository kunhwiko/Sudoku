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
};