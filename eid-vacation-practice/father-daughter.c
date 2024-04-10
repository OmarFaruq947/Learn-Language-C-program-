#include<stdio.h>
#include<float.h>
#include<math.h>
#include <errno.h>
#include <string.h>
int main()
{

int X,total_age, daughter;
scanf ("%d", &total_age);
if(total_age >0){
    X =(total_age * 4)/5;
    daughter =total_age - X;
    printf("%d  %d",X, daughter); 
}
    return 0;
}