#include "tictactoe.h"

// returns score for side
// +10 if particular side wins
// -10 if particular side loses
//  0 if draw or not yet complete
int isAWin(const int board[], const int side) {

	if(is3inARow(board,side))
		return 10;
	if(is3inARow(board,!side))
		return -10;
	return 0;
}
