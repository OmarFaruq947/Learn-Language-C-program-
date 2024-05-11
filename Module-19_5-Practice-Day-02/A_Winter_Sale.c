#include<stdio.h>
int main()
{
float discount, with_discount_price;
scanf ("%f %f", &discount, &with_discount_price);
float main_price = with_discount_price/(1-(discount/100));
printf("%0.2f", main_price);
    return 0;
}