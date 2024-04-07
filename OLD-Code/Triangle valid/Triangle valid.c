#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("\nplease enter the 1st angle : ");
    scanf ("%d",&a);
    printf("\nplease enter the 2nd angle : ");
    scanf ("%d",&b);
    printf("\nplease enter the 3rd angle : ");
    scanf ("%d",&c);
    d=(a+b+c);
    if(d==180)

        printf ("\n\n\n\n\n\n\                       'triangle'\n\n\n\n\n\n\n\n\n\n\n");

    else {
        printf ("\n\n\n\n\n\n\                       not triangle\n\n\n\n\n\n\n\n\n\n\n");
    }
    return 0;

}
