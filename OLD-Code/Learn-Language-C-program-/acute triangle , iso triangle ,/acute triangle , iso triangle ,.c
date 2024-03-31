#include<stdio.h>
int main()
{
    int a,b;
    printf ("polease enter the value : ");
    scanf ("%d",&a);
    if (90<a)
        printf ("it is Acute");
    else if (90==a)
    {
        printf ("it is iso angle");
    }
    else {
        printf ("it is obtuse");
    }
    return 0;
}
