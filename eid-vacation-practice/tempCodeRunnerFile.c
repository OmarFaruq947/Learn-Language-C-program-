#include<stdio.h>

int main()
{
int x;
scanf ("%d", &x);
if (0<=x<=100000000)
{
    long long int result = x*365;
    printf("%lld", result);
};
    return 0;
}

