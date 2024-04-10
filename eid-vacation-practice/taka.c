#include<stdio.h>
int main()
{

int X, Y, total, rina_taka, hulf_taka;
scanf ("%d %d", &X, &Y);
if(X>Y){
    total = X+Y;
    hulf_taka = total/2;
    rina_taka = hulf_taka-Y;
    printf("%d %d", hulf_taka, rina_taka);
}else{
    printf(" Wrong! ");
}
    return 0;
}