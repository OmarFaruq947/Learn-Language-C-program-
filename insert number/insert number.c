#include<stdio.h>
int main()
{
    int ar[100], position, i, n, value;
    printf("please enter the number of element of array: ");
    scanf ("%d", &n);

    printf("enter %d element\n",n);

    for (i=0; i<n; i++)
        scanf("   %d", &ar[i]);

    printf("\nenter the position for insert number:  ");
    scanf("%d", &position);

    printf ("\nenter the insert value:  ");
    scanf ("%d", &value);

    for (i=n-1; i>=position-1 ; i--)
    ar[i+1]=ar[i];
    ar[position-1]=value;

        printf("result is...");
        for(i=0;i<=n;i++)
            printf("\n%d",ar[i]);


        return 0;


}
