#include<stdio.h>
int main()
{
int row, col;
scanf ("%d %d", &row, &col);

int matrix_1[row][col];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        scanf ("%d", &matrix_1[i][j]);
    }
    
}
int matrix_2[row][col];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        scanf ("%d", &matrix_2[i][j]);
    }
    
}

// result matrix
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        printf("%d ",matrix_2[i][j] +matrix_1[i][j]);
    }
    printf("\n");
}

    return 0;
}