#include<stdio.h>
int main(){
int row, col;
printf("row & col input respectively\n");
scanf ("%d %d", &row, &col);
int element = row*col;
int matrix[row][col];
printf("matrix input..\n");
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        scanf("%d",&matrix[i][j]);
    }  
}
printf("Our [%d][%d] Matrix\n",row, col);
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        printf("%d  ",matrix[i][j]);
    }
    printf("\n");
}
int count=0;
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++){

        if (matrix[i][j] == 0)
        {
        count++;
        }
    }
}
if (count == element)
{
    printf("this is null matrix\n");
}else printf("Not null");
    return 0;
}