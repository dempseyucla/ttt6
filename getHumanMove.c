#include "tictactoe.h"

int getHumanMove(const int *board) {

	printf("\nEnter your move !!\n\n");
	int move;
	while(1) {

		//scanf("%d",move);	// ERROR
		scanf("%d",&move);	// GOOD LINE
		if(board[move-1] == EMPTY && move >=0 && move <=9)
			break;
		else
			printf("try again : ");
	}
	return move-1;
}

