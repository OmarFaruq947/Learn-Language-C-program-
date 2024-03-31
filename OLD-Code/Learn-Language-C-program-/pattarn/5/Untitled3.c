#include<stdio.h>
int main()
{
    int col, row;

    for(row=1 ; row<=5 ; row++)
    {
        //printing spece.
        for(col=1 ; col<=5-row ; col++)
        {
            printf(" ");
        }

          //printing vhlue.
        for (col=1 ; col<=row ; col++)
        {
        printf ("%d",col);
        }

    printf("\n");
    }
}

