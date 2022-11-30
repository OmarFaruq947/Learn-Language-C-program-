#include<stdio.h>
int main()
{
    int col, row;

    for(col='E' ; col>='A'; col--)
    {
    {
        for(row ='A' ; row<=col ; row++)
        printf("%c",col);
    }
    printf("\n");

    }
}
