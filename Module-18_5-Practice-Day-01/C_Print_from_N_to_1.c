#include<stdio.h>

void func(int N){

    if (N <= 0) return;
    
    printf("%d ", N);

    // if (N != 1)
    //     printf(" ");
    func(N-1);
}

int main()
{
int N;
scanf ("%d", &N);
func(N);
    return 0;
}