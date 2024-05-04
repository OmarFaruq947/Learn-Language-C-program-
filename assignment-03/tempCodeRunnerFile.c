#include<stdio.h>

int main()
{
int n, k=1;
scanf ("%d", &n);

for (int i = n; i >=n; i--){
    for (int j = 1; j>=k; j++){
    printf(" %d", j); 
    }
    k++;
    printf("\n");
}
    return 0;
}