#include<stdio.h>

int main()
{
int n,s,star;
scanf ("%d", &n);
s=n-1;
star=1;

for (int i = 1; i <=(n*2)-1; i++)
{

// one line
    for (int j = 1; j <=s; j++)
    {
        printf(" ");
    }
    for (int j = 1; j<=star; j++)
    {
        printf("*");
    }
    //line end
    if (i<=n-1)
    {
        s--;
        star +=2;
    }else{
        s++;
        star -=2;
    }
    printf("\n");
}
    return 0;
}