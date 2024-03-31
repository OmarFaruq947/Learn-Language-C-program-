#include<stdio.h>
int main()
{
    int col, row,n,m;

    //printf("enter the number:  ");
    //scanf("%d%d",&n,&m);
    for(row=1 ; row<=8 ; row++)
    {

        for(col=1 ; col<=8-row ; col++)
            {
            printf("*");
            }


        for(col=1 ; col<=row ; col++)
            {
            printf("  ");
            }




        printf("\n");
    }



}
