#include<stdio.h>
int main()
{
    float x,y,a1,a2,b1,b2,c1,c2;
    printf ("a1=  ");
    scanf ("%f", &a1);

     printf ("a2=  ");
     scanf ("%f", &a2);

     printf ("b1=  ");
     scanf ("%f", &b1);

     printf ("b2=  ");
     scanf ("%f", &b2);

     printf ("c1=  ");
     scanf ("%f", &c1);

     printf ("c2=  ");
     scanf ("%f", &c2);

     x=((b2*c1-b1*c2)/(a1*b2-a2*b1));
     y=((a1*c2-a2*c1)/(a1*b2 - a2*b1));

    printf ("\n\nx=%0.3f\n",x);

    printf ("y=%0.3f\n",y);
    return 0;
}
