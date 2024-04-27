#include <stdio.h>
#include <string.h>


int main() {
     char str[100];
    fgets(str, 100, stdin);

    int i = 0;
    int j = strlen(str) - 1;
    int palindrome=0;

    while (i < j) {
        if (str[i] != str[j]) {
            palindrome=0;
        }else{
            palindrome=1;
        }
        i++;
        j--;
    }
    if (palindrome)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    return 0;
}