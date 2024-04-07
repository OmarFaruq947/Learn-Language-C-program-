#include<stdio.h>
int main()
{
    int i,j=0,n=100;
    i=0;
    do
    {
      j=j+i;
      i=i+5;
    }
        while(i<=n);
        printf("%d\n",j);
    return 0;
}
