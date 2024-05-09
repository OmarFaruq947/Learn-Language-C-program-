#include<stdio.h>
#include <stdlib.h>
int main()
{
int N,M;
scanf ("%d %d", &N, &M);
int matrix[N][M];


for (int i = 0; i<N; i++){
    for (int j=0; j<M; j++){
        scanf("%d",&matrix[i][j]);
    }
}

int searching_value;
scanf ("%d", &searching_value);


int flag = 1;
for (int i=0; i<N; i++){
    for (int j = 0; j<M; j++)
    {
        if (matrix[i][j] == searching_value)
        {
            flag=0;
        }
        
    }
}

if (flag) printf("will take number\n");
else printf("will not take number\n");

    return 0;
}