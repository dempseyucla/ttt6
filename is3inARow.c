#include "tictactoe.h"

// checks if a 3 is formed by a side
// returns 1 if yes
// returns 0 if no
int is3inARow(const int board[], const int side) {

	// horizontal
	if(board[0] == side && board[1] == side && board[2] == side)
		return 1;
	if(board[3] == side && board[4] == side && board[5] == side)
		return 1;
	if(board[6] == side && board[7] == side && board[8] == side)
		return 1;

	// vertical
	if(board[0] == side && board[3] == side && board[6] == side)
		return 1;
	if(board[1] == side && board[4] == side && board[7] == side)
		return 1;
	if(board[2] == side && board[5] == side && board[8] == side)
		return 1;

	// diagonal
	if(board[0] == side && board[4] == side && board[8] == side)
		return 1;
	if(board[2] == side && board[4] == side && board[6] == side)
		return 1;

//	abort();		// ERROR: Delete this line.

	return 0;
}
