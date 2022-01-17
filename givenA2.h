#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3



void createInitialBoard(char A[N][N])
{
int i, j;
for(i=0; i<=N; i++)
{
for(j=0; j<=N; j++){
A[i][j] = '?';}

}
}

//-----------------------------------------------------------------------
void readUserMove(int *x, int *y)
{
printf("Enter row and column coordinates for your move: ");
scanf("%d%*c%d", &x, &y);
x--;
y--;
if (char A[x][y]!= '?'){
printf("Invalid move, try again.\n");
readUserMove();
}
else [x][y] = 'X';
}
//--------------------------------------------------------------------------

void printCurrentBoard(char board[N][N])
{
printf("\n");
for(int t=1; t<=N; t++) {
printf(" %c | %c | %c ", A[t][1], A[t][2], A[t][3]);
if(t!=3){
printf("\n------------\n");
}
}
printf("\n");
}
//--------------------------------------------------------------------------
void computerPlaysRandom(int * , int *);
int computerPlaysToWin(char [N][N], int * , int * );
int getComputerMove(char board[N][N], int *, int *, int, int);
int gameWon(char [N][N], char);
int isInputValid(int, int, int);
void all_sums(char board[N][N], int [N], int [N], int *, int *);
int memberOf(int value, int someArray[N]);
int isBoardFull(char board[N][N]);
{
   for(int i=0; i<N; i++) {
      for(int j=0;j<N;j++) {
            if(board[i][j]==)
            {

            }

   }
}




// you need the below prototype only if you attempt the additional functionality part
int computerPlaysToBlock(char [N][N], int * , int * );


