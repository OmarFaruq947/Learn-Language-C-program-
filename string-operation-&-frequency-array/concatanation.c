#include<stdio.h>
#include<string.h>
int main()
{
    int size=100;
char A[size], B[size];

scanf ("%s %s", &A, &B);
int k= strlen(A);
for (int i = 0; i < strlen(B); i++)
{
    A[k] = B[i];
    k++;
}
    printf("%s %s", A, B);



return 0;
}

//  strcat(A,B)