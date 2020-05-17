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
};