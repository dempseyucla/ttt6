#include <stdio.h>
#include <stdlib.h>

#define N 9

enum { O,X,EMPTY };

int getComputerMove(int *board,int side);
int getHumanMove(const int *board);
void initBoard(int board[]);
int is3inARow(const int board[], const int side);
int isAWin(const int board[], const int side);
int isBoardFull(const int board[]);
void makeMove(int board[], const int cell, const int side);
int max(int *scoreList,int moveCount,int *moveList,int *bestMove);
int min(int *scoreList,int moveCount,int *moveList,int *bestMove);
int minMax(int board[], int side, int *depth);
void printBoard(const int board[]);
void runGame();
