#include<stdio.h>
#include<math.h>
int main()
{

int reverse(n){
   do
    {
        printf("%d ", n%10);
        n=n/10;
    }
    while (n != 0);
}

int count;
scanf ("%d", &count);

for (int i = 1; i <= count; i++)
{
    int n;
    scanf ("%d", &n);
    reverse(n);
    printf("\n");

}
    return 0;
}