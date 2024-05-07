#include<stdio.h>
int main(){
int row, col;
printf("row & col input respectively\n");
scanf ("%d %d", &row, &col);
int element = row*col;
int matrix[row][col];
if (row == col){
    printf("matrix input..\n");
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        scanf("%d",&matrix[i][j]);
    }  
}
int flag = 0;
printf("Our [%d][%d] Matrix\n",row, col);
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        if (i == j)
        {
            if (matrix[i][j] != 0)
            {
                flag = 1;   
            }else {
                flag = 0;
            }   
        }   
    }
}
if (flag) printf("diagonal matrix \n");
else printf("not diagonal matrix \n");
}else printf("Impossible because this is not square matrix\n");
    return 0;
}