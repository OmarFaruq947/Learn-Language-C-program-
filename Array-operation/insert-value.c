#include<stdio.h>
#include<math.h>
int main()
{
int pos, insert_value, size;

printf("Enter the array size: \n");
scanf ("%d", &size);
int arr[size + 1];

printf("Enter Array Value: \n");
for (int i = 0; i < size; i++)
{
    scanf ("%d", &arr[i]);
}

printf("My new Array \n");
for (int i = 0; i < size; i++)
{
    printf("%d \n", arr[i]);
}



printf("Enter the position: \n");
scanf ("%d", &pos);
printf("position value=  %d\n", pos);
printf("Enter the insert Value: \n");
scanf ("%d", &insert_value);
printf("insert value=  %d\n", insert_value);

for (int i = size; i >= pos+1; i--)
{
    arr[i] = arr[i-1];
}
arr[pos]=insert_value;


printf("Update Array: \n");
for (int i = 0; i < size + 1; i++)
{
    printf("%d \n", arr[i]);
}



    return 0;
}