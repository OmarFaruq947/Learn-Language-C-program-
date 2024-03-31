#include<stdio.h>
int main()

{
int col, row;

    for(col=1; col<=5 ; col++)
    {
      for(row=1 ; row<=5 ; row++)
      {
          printf("%d",col%2);
      }
      printf("\n");
    }

}

