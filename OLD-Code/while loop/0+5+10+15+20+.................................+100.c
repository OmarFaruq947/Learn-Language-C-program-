
#include<stdio.h>
int main()
{

    int i,n,j=0;
    printf ("enter the number:   ");
    scanf ("%d",&n);
    i=0;

    while (i<=n)
       {
        j=j+i;
        i=i+5;
      }
        printf ("%d\n",j);
        return 0;
}
