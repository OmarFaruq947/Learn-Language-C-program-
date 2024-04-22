#include<stdio.h>
#include<math.h>
int main()
{
int pos, size;

printf("Enter the array size: \n");
scanf ("%d", &size);
int arr[size];

printf("Enter Array Value: \n");
for (int i = 0; i < size; i++)
{
    scanf ("%d", &arr[i]);
}

printf("My new Array \n");
for (int i = 0; i < size; i++)
{
    printf("%d   \n", arr[i]);
}



printf("Enter the position : \n");
scanf ("%d  ", &pos);


for (int i = pos; i< size-1; i++)
{
    arr[i] = arr[i+1];
}



printf("Update Array: \n");
for (int i = 0; i < size-1; i++)
{
    printf("%d   ", arr[i]);
}

    return 0;
}
