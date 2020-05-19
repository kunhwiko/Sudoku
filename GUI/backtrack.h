#ifndef BACKTRACK_H

#include <iostream>
#include <tuple>

#define BACKTRACK_H
using namespace std;
#endif // BACKTRACK_H

class backtrack
{
    private:
    int** board;

    public:
    backtrack(int** matrix){
        board = matrix;
    }

    private:
    tuple<int, int> find_zero();
    bool valid(int num, tuple<int,int> pos);
    bool backtracking();
};

