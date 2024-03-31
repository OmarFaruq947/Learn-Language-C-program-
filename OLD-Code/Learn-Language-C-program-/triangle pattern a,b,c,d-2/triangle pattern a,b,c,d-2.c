#include<stdio.h>
int main()
{
    char i,j,n;
    printf ("enter the ascii cod:  ");
    scanf ("%d",&n);

    for (i=65;i<n;i++)   /*ASCII code অনুসারে  কাজ হচ্চে  এখানে  a=৬৫ থেকে  শুরু*/
    {
        for (j=65;j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }

}
