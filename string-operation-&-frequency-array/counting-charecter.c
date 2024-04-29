#include<stdio.h>
#include<string.h>
int main()
{


char arr[100];
scanf ("%c", &arr);

int count[26]={0};

for (int i = 0; i < strlen(arr); i++)
{
    int value = arr[i];
    count[value]++;
}

for (int i = 0; i < 26; i++)
{
    printf("%c - %d\n", i+'a', count[i]);
}
    return 0;
}