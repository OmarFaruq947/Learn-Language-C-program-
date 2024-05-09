#include<stdio.h>

int func(int arr[], int N, int i){

    if (i >= N) return;
    func(arr,N, i+2);
    printf("%d ",arr[i]);
}

int main()
{
int N;

scanf ("%d", &N);
int arr[N];
for (int i = 0; i < N; i++)
{
    scanf ("%d", &arr[i]);
}

func(arr,N,0);
    return 0;
}