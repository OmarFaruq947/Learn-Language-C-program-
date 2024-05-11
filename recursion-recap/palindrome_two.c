#include<stdio.h>
#include<string.h>
int main()
{
char str[1001];
scanf ("%s", str);

int len = strlen(str);

int i=0, j=len-1, flag=1;
while (i<j)
{
    if (str[i] != str[j])
    {
        flag = 0;
        break;
    }
    i++;
    j--;
}

if (flag) printf("YES");
else printf("NO");

    return 0;
}