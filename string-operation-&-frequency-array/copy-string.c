#include<stdio.h>
#include<string.h>
int main()
{
    int size=100;
char A[size], B[size];

scanf ("%s %s", &A, &B);

for (int i = 0; i <= strlen(B); i++)
{
 A[i] = B[i];
}

printf("%s", A);
    return 0;
}