#include<stdio.h>

void func(int N){

    if (N==0){
    return;
    } 
    func(N-1);
    printf("I love Recursion\n");
}

int main()
{
int N;
scanf ("%d", &N);
func(N);
    return 0;
}