#include<stdio.h>
int main()
{
    int col, row;

    for(col='A' ; col<='E' ; col++)
    {
        for(row='A' ; row<=col; row++)
        {
            printf("%c",col);
        }
        printf("\n");
    }


     for(col='E'-1 ; col>='A' ; col--)
    {
        for(row='A' ; row<=col; row++)
        {
            printf("%c",col);
        }
        printf("\n");
    }






}


