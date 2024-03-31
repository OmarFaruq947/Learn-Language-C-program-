
#include<stdio.h>
int main()
{
    int i,j=0,n;
    for (i=0;i<=100;i=i+5)   /*we will get output 1050*/
        j=j+i;
        printf("%d",j);
    return 0;
}
