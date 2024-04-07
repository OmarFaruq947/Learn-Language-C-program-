#include<stdio.h>
int main()
{
    int n,revrsednumber=0, remainder;

    printf ("enter the number:  ");
    scanf("%d",&n);

    while (n!=0)
    {
        remainder = n%10;
        revrsednumber = revrsednumber*10+remainder;
        n/=10;
    }
    printf ("revers number = %d",revrsednumber);
    return 0;

}
