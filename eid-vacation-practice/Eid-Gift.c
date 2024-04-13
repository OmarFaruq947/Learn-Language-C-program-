#include<stdio.h>

int main()
{

int number_of_gift, number_of_children;
scanf ("%d %d", &number_of_gift, &number_of_children);

if(number_of_gift%number_of_children == 0){
    int distributed_gift = number_of_gift/number_of_children;
    printf("%d %d",distributed_gift, 0);
}
    return 0;
}