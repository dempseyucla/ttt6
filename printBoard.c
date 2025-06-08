#include "tictactoe.h"

// print the board on console
void printBoard(const int board[]) {

	char symbol[] = { 'O','X','-' };

	printf("\n  BOARD\n\n");
	for(int i=0; i<N; i++) {
		if(i != 0 && i%3 == 0)
			printf("\n\n");
		printf(" %c ",symbol[board[i]]);
	}
	printf("\n\n");
}
