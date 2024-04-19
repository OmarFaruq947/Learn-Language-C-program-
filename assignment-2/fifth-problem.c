#include<stdio.h>

int main()
{
int N,i, update_index, update_value;

scanf ("%d", &N);
int arr[N];


printf("-----------array input-----------\n");
for (int i = 0; i < N; i++)
{
    scanf ("%d", &arr[i]);
}

printf("-----------array index-----------\n");
scanf ("%d", &update_index);

printf("-----------array value-----------\n");
scanf ("%d", &update_value);


printf("-----------array print-----------\n");
// print
for (i = N-1; i>=0; i--)
{
    arr[update_index]=update_value;
    printf("%d ", arr[i]);
}

    return 0;
}