#include<stdio.h>
int main ()

{
    int n,i;

    printf ("enter an integer:  ");       // n= 1/2/3/4/5/6/7/8/9/10/..........n (change).
    scanf ("%d",&n);

    for (i=1; i<=10; ++i) //waring : now semicolon (;) is not allow.
    {
     printf ("%d*%d = %d\n",n,i, n*i);
    }
    return 0;
}
