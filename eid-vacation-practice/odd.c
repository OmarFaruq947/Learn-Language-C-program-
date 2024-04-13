#include<stdio.h>

int main()
{
int N,start;

scanf ("%d", &N);
if (0<N)
{
    start = (N /4)-3;
    
     
}
// printf("%d ",start);

for (int i = 0 ; i <8; i++)
{
    if((start - i)%2 !=0){
    printf("%d ", start + i );
    }
}
    return 0;
}