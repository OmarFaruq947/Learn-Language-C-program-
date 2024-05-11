#include<stdio.h>
int main()
{
int x;
scanf ("%d", &x);

for (int i = 0; i < x; i++)
{
int height, width;
scanf ("%d %d", &height, &width);

if (height == width)
{
    printf("Square\n");
}else printf("Rectangle\n");

}

    return 0;
}