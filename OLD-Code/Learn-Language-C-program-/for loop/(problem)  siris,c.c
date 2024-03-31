#include<stdio.h>
int main()
{
    int i,a=0,n;
    printf ("please enter the value : ");
    scanf ("%d",&n);
    for(i=5;i>=n;i=i-1)
        a=a+i;
        printf ("%d\n\n",a);
    return 0;
}
