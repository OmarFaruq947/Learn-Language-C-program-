#include<stdio.h>

void func(int n){

    if (n < 10) {
printf("%d ",n);
    return;
    }
    func(n/10);
    printf("%d ",n%10);
    return 0;
}

int main()
{
    int test;
    scanf ("%d", &test);

    for (int t = 0; t < test; t++)
    {
        int n;
        scanf ("%d",&n);
        func(n);
        printf("\n");
    }

    return 0;
}



// unknown problem show