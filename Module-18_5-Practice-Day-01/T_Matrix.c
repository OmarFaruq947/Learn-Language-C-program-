#include<stdio.h>
#include <stdlib.h>
int main()
{
int N;
scanf ("%d", &N);
int matrix[N][N];
for (int i = 0; i<N; i++){
    for (int j=0; j<N; j++){
        scanf("%d",&matrix[i][j]);
    }
}

int primary_diagonal=0;
int secondary_diagonal=0;

for (int i=0; i<N; i++){
    for (int j = 0; j<N; j++)
    {
        if (i == j) primary_diagonal = primary_diagonal+matrix[i][j];  
        if (i+j == N-1) secondary_diagonal = secondary_diagonal+matrix[i][j]; 
    }
}
int result = abs(primary_diagonal -secondary_diagonal);
printf("%d \n", result);

    return 0;
}