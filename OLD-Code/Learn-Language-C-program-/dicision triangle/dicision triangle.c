#include<stdio.h>
int main()
{
    int a,b,c,d,A,B,C;
    printf("please enter the 1st arm length : ");
    scanf ("%d", &a);
    printf("\n\nplease enter the 2nd arm length : ");
    scanf ("%d", &b);
    printf("\n\nplease enter the 3rd arm length : ");
    scanf ("%d", &c);
    if (A=a+b>c)
       printf ("\n\n\n A is tringle");
    else if (B=a+c>b)
      printf ("\n\n\n B is tringle");
    else if (C=b+c>a)
      printf ("\n\n\n C is tringle");

    else {
        printf ("\n\n\nit is not triangle");
    }
    return 0;
}
