#include<stdio.h>

int main()
{
int n;
scanf ("%d", &n);
int arr[n];

//input
for (int i = 0; i < n; i++)
{
    scanf ("%d", &arr[i]);
}


// max output
int max_number= arr[0];
int max_Index=0;

for (int i = 1; i < n; i++)
{
    if (arr[i]> max_number)
    {
       max_number=arr[i];
       max_Index = i;
    }
}
// printf("max_number= %d - %d\n", max_Index, max_number);



// min output
int min_number=arr[0];
int min_Index=0;
for (int i = 1; i < n; i++)
{
    if (arr[i]< min_number)
    {
        min_number=arr[i];
        min_Index = i;
    }   
}
// printf("min_number= %d - %d\n",min_Index,  min_number);


//swap
int temp = arr[min_Index];
arr[min_Index] = arr[max_Index];
arr[max_Index] = temp;

for (int i = 0; i < n; i++)
{
    printf("%d ", arr[i]);
}
    return 0;

}


