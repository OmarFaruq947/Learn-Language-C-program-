#include<stdio.h>
int main()
{
int row, col;
printf("row & col input respectively\n");
scanf ("%d %d", &row, &col);



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


// printf("Enter Row number for particular row print \n");
// int E;
// scanf ("%d", &E);

// for (int i = 0; i <col; i++)
// {
//     printf("%d ",matrix[E][i]);
// }


printf("Enter Column number for particular column print \n");
int D;
scanf ("%d", &D);

for (int i = 0; i <row; i++)
{
    printf("%d \n",matrix[i][D]);
}

    return 0;
}