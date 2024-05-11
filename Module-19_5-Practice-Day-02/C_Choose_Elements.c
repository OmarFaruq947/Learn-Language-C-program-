#include<stdio.h>
int main()
{
long long int size;
scanf ("%lld", &size);

long long int arr[size];
for (int i = 0; i < size; i++)
{
    scanf ("%lld", &arr[i]);
}

int k;
scanf ("%d", &k);

for (int i = 0; i < size-1; i++)
{
    for (int j = i+1; j < size; j++)
    {
        if (arr[i] <= arr[j])
        {
            long long int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}

long long int sum_element=0;
for (int i = 0; i < k; i++)
{
    if (sum_element+arr[i] > sum_element)
    {
    sum_element = sum_element + arr[i];
    }
    
}
    printf("%lld ", sum_element);
    return 0;
}