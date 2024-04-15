#include<stdio.h>

int main()
{
int n;
int N, max=0; 

scanf ("%d", &n);

for (int i = 1; i <=n; i++)
{
    scanf ("%d", &N);
    if(N>max){
        max=N;
    }
}
printf("%d", max);
    return 0;
}