#include<stdio.h>

int main()
{
int x;
scanf ("%d", &x);
if (0<=x<=100000000)
{
    long int result = x*365;
    printf("%ld", result);
};
    return 0;
}