#include<stdio.h>
#include<limits.h>

int maxNum(int arr[], int n, int i){

if (i==n){
    return INT_MIN;
}

int max = maxNum(arr, n, i+1);
if (arr[i] > max)
{
    return arr[i];
}else{
    return max;
}

}


int main()
{
int n;
scanf ("%d", &n);
int arr[n];

for (int i = 0; i < n; i++)
{
    scanf ("%d", &arr[i]);
}
int max = maxNum(arr, n, 0);
printf("%d\n", max);

    return 0;
}