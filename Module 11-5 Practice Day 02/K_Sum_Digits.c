#include<stdio.h>
#include<math.h>
int main()
{
int N;
scanf ("%d", &N);

char arr[N+1];
scanf ("%s", &arr);

int sum = 0;
for (int i = 0; i < N; i++)
{
    sum += arr[i] - '0';
}

printf ("%d ", sum);
    return 0;
}