#include<stdio.h>

int main()
{
int X;
int correct_pass=1999;
    while (scanf ("%d", &X) != EOF){
    if(X == correct_pass){
            printf("Correct\n");
            break;
        }
        else{
               printf("Wrong\n");
            }
}    return 0;
}
