#include<stdio.h>
#include<string.h>
int main()
{
    int size=100;
char A[size], B[size];

scanf ("%s %s", &A, &B);
    strcat(A,B);
    printf("%s %s", A, B);
return 0;
}