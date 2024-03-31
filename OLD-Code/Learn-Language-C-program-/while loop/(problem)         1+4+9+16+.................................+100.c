#include<stdio.h>
int main()
{

    int i,n,j,k=0;
    printf ("enter the number:   ");  /* input 20th number*/
    scanf ("%d",&n);
    i=1;
    while (i<=n)
    {

         i=i+1;
         j=i*i;
         k=k+j;
    }
    printf ("%d\n",k);
}

