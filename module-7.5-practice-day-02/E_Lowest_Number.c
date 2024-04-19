#include<stdio.h>
#include<math.h>
int main()
{
int size;

scanf ("%d", &size);
int arr[size];


if (2 <= size <= 1000)
{
    //array input
for (int i = 0; i < size; i++)
{
    scanf ("%d", &arr[i]);
}


// print
for (int i = 0; i < size; i++)
{
    if(arr[i] <= 10){
    printf("A[%d] = %d\n", i, arr[i]);
    }
}
}

    return 0;
}