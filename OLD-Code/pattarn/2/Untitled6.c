#include<stdio.h>
int main()
{
    int col, row;

    for(col=1 ; col<=5 ; col++)
    {
        for(row=1 ; row<=col; row++)
        {
            printf("%d",row%2);
        }
        printf("\n");
    }


     for(col=5-1 ; col>=1 ; col--)
    {
        for(row=1 ; row<=col; row++)
        {
            printf("%d",row%2);
        }
        printf("\n");
    }






}


