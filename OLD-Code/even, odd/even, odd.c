#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the value:  ");
    scanf("%d",&x);
    y=x%2;
    if (y==0)
    {
        printf ("  \n\nx is even\n");
    }
    else{
        printf ("  \n\nx is odd\n");

    }
    return 0;
}
