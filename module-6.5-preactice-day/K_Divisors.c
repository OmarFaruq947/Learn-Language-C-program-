#include<stdio.h>
#include<math.h>
int main()
{
int N;
int a=1, b=2, c=3;
scanf ("%d", &N);
if(1<= N <= 10000){
   
   for (int i = 1; i <=N; i++)
   {
    if(N %i == 0){
        printf("%d\n",i);
    }
   }
   
}
    return 0;
}