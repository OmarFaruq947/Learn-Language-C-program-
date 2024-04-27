#include<stdio.h>
#include<string.h>
int main()
{
    char str[105];
fgets(str, 105, stdin);

int len = strlen(str);

    for (int i = 0; i<len; i++)
{
    if (str[i] == ',')
    {
        str[i]=' ';
    }
    else if(str[i] >= 'A' && str[i] <='Z'){
        str[i] = str[i]+('a' - 'A');
    }else if(str[i] >= 'a' && str[i] <= 'z'){
        str[i] = str[i] -('a'-'A');
    }
}
printf("%s", str);

    return 0;
}