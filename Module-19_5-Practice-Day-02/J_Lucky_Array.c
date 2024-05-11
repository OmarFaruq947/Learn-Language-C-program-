#include<stdio.h>
#include<limits.h>
int main()
{
int size;
scanf ("%d", &size);

int arr[size];
for (int i = 0; i < size; i++)
{
    scanf ("%d", &arr[i]);
}




// find the minimum value
int min = INT_MAX;
for (int i = 0; i < size; i++)
{
    if (arr[i] < min){
        min = arr[i];
    } 
}



// count the frequency of the minimum element
int count = 0;
for (int i = 0; i < size; i++)
{
    if (arr[i] == min)
    {
    count ++;
    }   
}


 // Check if the frequency is odd or even
    if (count % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }
    return 0;
}
