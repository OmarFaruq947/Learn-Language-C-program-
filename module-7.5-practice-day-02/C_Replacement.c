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

int positive = 1;
int negative =2;

for (int i = 0; i < size; i++)
{
    if(arr[i]>0){
    printf("%d ",positive);
    continue;
    }else if(arr[i]<0){
        printf("%d ", negative);
    }else{
        printf("%d ",0);
    }
}
}

    return 0;
}