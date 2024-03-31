#include<stdio.h>
int main()
{
    int i,n,k=0;
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            k++;
            break;
        }

    }
        if(k==0)
        {
            printf("prime");
        }
        else{
            printf("not prime");
        }



}
