#include<stdio.h>
int main()
{
    int i,n,factorial;
    factorial = 1;
    printf ("enter the integer:  ");
    scanf("%d",&n);

    if (n<0)
    printf ("\nthe value does not exist\n\n\n");

    else
        {
            for(i=1;i<=n;i++)
            {
                factorial *=i;
            }
            printf ("\nfactorial of %d=%d \n\n\n",n, factorial);
        }
        return 0;
}
