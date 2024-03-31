#include<stdio.h>
int main()
{
    int a;
    printf ("please enter the value: ");
    scanf ("%d", &a);
    if (a>=60)
    {
        printf ("first");

    }
    else if (a>=50 && a<59)
    {
        printf ("second");
    }else if (a>=40 && a<49)
    {
        printf ("third");
    }
    else {
        printf ("fail");
    }
    return 0;

}
