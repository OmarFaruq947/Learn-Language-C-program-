#include<stdio.h>

int main()
{
int size;

scanf ("%d", &size);
int arr[size];

//input
for (int i = 0; i < size; i++)
{
    scanf ("%d", &arr[i]);
}


long long int search;
scanf ("%lld", &search);


int position = -1;
//print
for (int i = 0; i < size; i++)
{

     if(arr[i] == search)
        {
            position = i;
            break;
        }
}

    printf("%d\n", position);
    return 0;
}