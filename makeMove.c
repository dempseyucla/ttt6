#include "tictactoe.h"

// makes a move on the given cell by given side
void makeMove(int board[], const int cell, const int side) {
	board[cell] = side;
}
