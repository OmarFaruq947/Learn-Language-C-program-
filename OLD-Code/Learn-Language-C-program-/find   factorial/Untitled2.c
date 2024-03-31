#include<stdio.h>
int main()
{
    int n,tem,p,s=0;
    scanf("%d",&n);

        tem=n;
        while(n!=0)
        {
            p=n%10;
            s=(s*10)+p;
            //n=n/10;
        }

        if(s==tem)
        {
            printf("palindrom");
        }
        else
            {
                printf("not palindrom");
            }

}
