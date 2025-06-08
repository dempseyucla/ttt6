#include "tictactoe.h"

extern int COMP;
extern int HUMAN;

int minMax(int board[], int side, int *depth) {

	int moveList[N];
	int moveCount = 0;
	int bestMove;
	int scoreList[N];
	int bestScore;

	bestScore = isAWin(board,COMP);
	if(bestScore)
		return bestScore - *depth;

	// fill the moveList[]
	//depth = NULL;		// ERROR: Delete this line.
	for(int i=0;i<N;i++) {
		if(board[i] == EMPTY)
			moveList[moveCount++] = i;
	}

	// loop through all moves
	int move;
	for(int i=0;i<moveCount;i++) {

		move = moveList[i];
		makeMove(board,move,side);

		(*depth)++;
		scoreList[i] = minMax(board,!side,depth);
		(*depth)--;

		makeMove(board,move,EMPTY);
	}

	if(side == COMP) {
		// MAX
		bestScore = max(scoreList,moveCount,moveList,&bestMove);
	}
	if(side == HUMAN) {
		// MIN
		bestScore = min(scoreList,moveCount,moveList,&bestMove);
	}

	if(*depth != 0)
        return bestScore;
    else
        return bestMove;
}
