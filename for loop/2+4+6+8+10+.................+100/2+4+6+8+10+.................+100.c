#include<stdio.h>
int main()
{
    int i,j=0,n;
    for (i=2;i<=100;i=i+2)   /*we will get output 2550*/
        j=j+i;
        printf("%d",j);
    return 0;
}
