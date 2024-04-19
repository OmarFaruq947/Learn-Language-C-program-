#include<stdio.h>
#include<math.h>
int main()
{
int size,i;

scanf ("%d", &size);
int arr[size];


if (1 <= size <= 1000)
{
    //array input
for (i = 0; i < size; i++)
{
    scanf ("%d", &arr[i]);
}


// print
for (i = size-1; i>=0; i--)
{
    printf("%d ", arr[i]);
}
}

    return 0;
}