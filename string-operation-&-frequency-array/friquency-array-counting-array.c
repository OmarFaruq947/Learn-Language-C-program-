#include<stdio.h>
#include<math.h>
int main()
{
int size;
scanf ("%d", &size);

int arr[size];
for (int i = 0; i < size; i++)
{
    scanf ("%d", &arr[i]);
}

// print

int count[10]={0};

for (int i = 0; i < size; i++)
{
    count[ arr[i] ]++;
}

for (int i = 0; i < 5; i++)
{
     printf("%d - %d\n",i, count[i]);
}

   




    return 0;
}