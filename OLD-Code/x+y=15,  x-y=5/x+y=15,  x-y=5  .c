#include<stdio.h>
int main()
{
    float x,y, x_plus_y, x_mainus_y;

    printf ("enter the value x+y=  ");
    scanf ("%f",&x_plus_y);

    printf ("enter the value x-y=  ");
    scanf ("%f",&x_mainus_y);

    x= (x_plus_y + x_mainus_y)/2;
    y= (x_plus_y-x_mainus_y)/2;

    printf("x=%0.3f ", x);
    printf("y=%0.3f ", y);

    return 0;
}
