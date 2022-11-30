
#include<stdio.h>
int main()
{
    int row , col;

    //printing  new line.
    for (row=1 ; row<=5 ; row++)
    {

        //printing spese .
        for(col=1 ; col<=5-row ; col++)
        {
            printf(" ");
        }

        //printing value.
       for (col=1 ; col<=row ; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    //printf("..............................\n");

     //printing second part .
     for (row=5-1 ; row>=1 ; row--)
    {
        for(col=1 ; col<=5-row ; col++)
        {
            printf(" ");
        }
       for (col=1 ; col<=row ; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

