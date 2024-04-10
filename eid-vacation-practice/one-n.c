#include<stdio.h>

int main()
{
int long long N;
int long long sum=0;
scanf ("%lld", &N);
if(N>0){
    for (int i = 1; i<=N; i++)
    {
        sum=sum + i;
    }
    printf("%lld \n", sum);
}
    return 0;
}