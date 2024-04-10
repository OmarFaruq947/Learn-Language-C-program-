#include<stdio.h>

int main()
{

int N,start;

scanf ("%d", &N);
if (0<N)
{
    start = (N - 20)/10 * 2;
}
// printf("%d ", start);
for (int i = 0 ; i <9; i++)
{
    if((start + i)%2 ==0){
    printf("%d ", start + i );
    }
}


    return 0;
}