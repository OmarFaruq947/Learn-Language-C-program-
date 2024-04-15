#include<stdio.h>
#include<math.h>
int main()
{
int N;
scanf ("%d", &N);
if(1<N){
    for (int i = 1; i<=N; i++)
    {
        if(i%2 == 0){
            printf("%d \n", i); 
        }
    } 
}else if(N==1){
            printf("-1");
        }
    return 0;
}