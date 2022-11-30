#include<stdio.h>
int main()
{
    int i,j=0,n;
    for (i=1;i<=100;i=i+2)   /*we will get output 2500*/
        j=j+i;
        printf("%d",j);
    return 0;
}

