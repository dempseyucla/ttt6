#include "tictactoe.h"

// returns which moves gives the maximum score
int max(int *scoreList,int moveCount,int *moveList,int *bestMove) {
    
    if(!moveCount)
    	return 0;

    int max = -20;
    
    for(int i=0;i<moveCount;i++) {
        if(scoreList[i] > max) {
            max = scoreList[i];
            *bestMove = moveList[i];
        }
    }
    return max;
}
