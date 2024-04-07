#include<stdio.h>
void main()
{
    int a,b,add,subtract,miltiply, division,modulus;
    printf ("\nplease enter the number: \n");
    scanf ("%d%d", &a ,&b);
    add=a+b;
    subtract=a-b;
    miltiply =a*b;
    division=a/b;
    modulus=a%b;
    printf ("  the sum is : %d\n\n  the subtract is : %d\n\n  the miltiply is : %d\n\n  the division is : %d\n\n  the modulus is : %d\n\n",add,subtract,miltiply,division,modulus);
}
