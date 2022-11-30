#include<stdio.h>
int main()
{
    int i,j=0,n=100;
    i=1;
    do
    {
      j=j+i;
      i=i+1;
    }
        while(i<=n);
        printf("%d\n",j);
    return 0;
}
