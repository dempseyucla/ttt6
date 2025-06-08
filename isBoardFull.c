#include "tictactoe.h"

// checks if the board is full or not
// returns 1(true) if full
// returns 0(false) if even one cell is empty
int isBoardFull(const int board[]) {

	for(int i=0; i<N; i++)
		if(board[i] == EMPTY)
			return 0;
	return 1;
}

