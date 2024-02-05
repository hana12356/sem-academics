// Online C compiler to run C program online
#include <stdio.h>
#include<stdbool.h>
#define N 4
int board[N][N];
void printBoard()
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%c",board[i][j]?'Q':'-');
        }
         printf("\n");
    }
     printf("\n");
}
bool isSafe(int row,int col){
    for(int i=0;i<col;i++)
    if(board[row][i])
       return false;
for(int i=row,j=col;i>=0&&j>=0;i--,j--)
if(board[i][j])
return false;

return true;
}
bool solveNQueens(int col){
    if(col == N){
        printBoard();
        return true;
    }
    bool res = false;
    for(int i=0;i<N;i++){
        if(isSafe(i,col)) {
            board[i][col] = 1;
            res = solveNQueens(col + 1) || res;
            board[i][col] = 0;
            
        }
    }
        return res;
}
int main() {
for (int i=0;i<N;i++)
for(int j=0;j<N;j++)
board[i][j]=0;
solveNQueens(0);
return 0;
}

