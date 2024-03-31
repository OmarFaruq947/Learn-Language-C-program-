#include<stdio.h>
int main()
{
    int i,a=0,n;
    printf ("please enter the number : ");
    scanf ("%d",&n);
    for(i=1;i<=n;i=i+3)
        a=a+i;
    {
        printf ("%d\n",a);
    }
    return 0;
}
