#include "tictactoe.h"

// returns which moves gives the minimum score
int min(int *scoreList,int moveCount,int *moveList,int *bestMove) {
    
    if(!moveCount)
    	return 0;

    int min = +20;
    
    for(int i=0;i<moveCount;i++) {
        if(scoreList[i] < min) {
            min = scoreList[i];
            *bestMove = moveList[i];
        }
    }
    return min;
}
