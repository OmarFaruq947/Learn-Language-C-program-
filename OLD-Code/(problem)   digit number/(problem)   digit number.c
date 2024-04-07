#include<stdio.h>
int main()
{
    int n,m,x,p;
    printf("please enter the value: ");
    scanf ("%d", &n);
 while (n!=0)
    {
     if (p=n%10)
    x=p+m;

    n=n/10;
    }
    printf ("Total digit number %d\n",x);
    return 0;
}
