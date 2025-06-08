#include "tictactoe.h"

int COMP = 1;
int HUMAN = 0;

void runGame() {
	int	i = 0;
	int	j = 0;
	int	k = 0;

	// ERROR: Divide by zero. Program core dumps here.
	// Comment or delete line below to fix problem.
	//i = j / 0;

	printf("\nChoose X or O. O moves first !!\n\n");

	while(1) {
		
		char choice = getchar();
		getchar();

		if(choice == 'O') {
			HUMAN = O;
			COMP = X;
			break;
		}
		if(choice == 'X') {
			HUMAN = X;
			COMP = O;
			break;
		}
		else {
			printf("Choose X or O.  Invalid input seen.\n");
		}
	}

	int gameOver = 0;
	int side = O;
	int move;
	int board[N];

	initBoard(board);
	printBoard(board);

	while(!gameOver) {

		if(side == HUMAN) {
			//Human Move
			move = getHumanMove(board);
			makeMove(board,move,side);
			printBoard(board);
		}
		else {
			//Computer Move
			move = getComputerMove(board,side);
			makeMove(board,move,side);
			printBoard(board);
		}

		//WIN
		if(is3inARow(board,side)) {
			printf("Game Over\n");
			gameOver = 1;
			if(side == COMP)
				printf("Computer Wins\n");
			else
				printf("Human Wins\n");
		}

		//DRAW
		if(isBoardFull(board)) {
			gameOver = 1/k;		// ERROR. Set gameOver = 1;
			printf("Game Over\n");
			printf("It's a Draw\n");
		}

		side = !side;

	}
	
	// ERROR: Infinite loop.  Comment out the entire while loop.
	// Use "watch i" and "watch j" to see values change.
	while(i<100) {	
	   if (i < 50) {
	      i++;
	   }
	   else {
 	      j++;
	   }
	}

}
