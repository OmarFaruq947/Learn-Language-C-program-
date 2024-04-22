#include<stdio.h>
#include<math.h>
int main()
{
int n;

scanf ("%d", &n);
int array_A[n];
for (int i = 0; i < n; i++)
{
    scanf ("%d", &array_A[i]);
}



int m;
scanf ("%d", &m);
int array_B[m];

for (int i = 0; i < m; i++)
{
    scanf ("%d", &array_B[i]);
}



int ans[n+m];
for (int i = 0; i<n; i++)
{
    ans[i]=array_A[i];
}


int i=n;
for (int j = 0; j < m; j++)
{
    ans[i]=array_B[j];
    i++;
}



for (int i = 0; i < n+m; i++)
{
    printf("%d ", ans[i]);
}


    return 0;
}