#include<stdio.h>
int main()
{
    int col, row;


    //printing  new line.
    for(row=5 ; row>=1 ; row--)
    {
        //printing spasce.
        for(col=1 ; col<=5-row ; col++)
        {
            printf(" ");
        }

        //printing  vhalue.
        for(col=1 ; col<=row ; col++)
        {
            printf("%c",col+64);
        }
        printf("\n");
    }
}

