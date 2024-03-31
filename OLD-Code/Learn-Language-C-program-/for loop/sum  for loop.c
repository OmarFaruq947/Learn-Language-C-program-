#include<stdio.h>
int main()
{
    int i,n,a=0;
    printf ("please enter the number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i=i+1)
    a=a+i;
    {
        printf(" %d\n",a);
    }
    return 0;
}
