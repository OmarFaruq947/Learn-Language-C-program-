#include<stdio.h>
int main()
{
    int col,row;

    for(col='A'; col<='E' ; col++)
    {
        for(row='A'; row<=col ; row++)
        {
            printf("%c",row);

        }
        printf("\n");
    }
}
