#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
char str[100000];

 for (int i = 0; i < sizeof(str) - 1; i++) {
        scanf("%c", &str[i]);
        if (str[i] == '\n') {
            str[i] = '\0'; 
            break;
        }
    }

int total_constant=0;

for (int i = 0; i <strlen(str); i++)
{
    char character= tolower(str[i]);
    if ( character != 'a' && character != 'e' && character != 'i' && character != 'o' && character !='u' )
    {
        total_constant = total_constant + 1;
    } 
}

printf("%d", total_constant);
    return 0;
}