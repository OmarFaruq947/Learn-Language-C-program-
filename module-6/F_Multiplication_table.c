#include<stdio.h>
#include<math.h>
int main()
{
int n;

scanf ("%d", &n);
for (int j = 1; j <=12; j++)
{
    // printf("%d \n", j);
    int mul = n*j;
    printf("%d * %d = %d \n",n, j, mul);
}
    return 0;
}