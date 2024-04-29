#include<stdio.h>
#include<string.h>
int main()
{

char str[100];
  scanf ("%s", &str);

// for (int i = 0; i <strlen(str); i++)
// {
// int value = str[i]-'a';
// printf("%d  ", value);
// }



int count[26]={0};
for (int i = 0; i < strlen(str); i++)
{
    int value = str[i] -'a';
    count[value]++;
}

for (int i = 0; i <26; i++)
{
    printf("%c : %d\n",i+'a',count[i]);
}
    return 0;
}
