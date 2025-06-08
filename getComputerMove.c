#include "tictactoe.h"

int getComputerMove(int *board,int side) {

    int depth = 0;
    int bestMove = minMax(board,side,&depth);
    printf("Searched.... bestMove: %d\n",bestMove+1);
    return bestMove;
}

