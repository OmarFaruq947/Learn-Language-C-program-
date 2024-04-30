#include<stdio.h>

int main()
{
int size;
scanf ("%d", &size);

int arr[size];
for (int i = 0; i < size; i++)
{
    scanf ("%d", &arr[i]);
}

int divided_by_two=0, divided_by_three=0; 

for (int i = 0; i < size; i++)
{
    if (arr[i] % 2 == 0 )
    {
     divided_by_two++;   
    }
    if (arr[i] % 3 == 0)
    {
     divided_by_three++;   
    }
    if ((arr[i] % 2 == 0) &  (arr[i] %3 ==0))
    {
     divided_by_two--;  
     divided_by_two++;
     divided_by_three--;
    } 
}
printf("%d %d\n", divided_by_two, divided_by_three);
    return 0;
}