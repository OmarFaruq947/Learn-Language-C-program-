#include <stdio.h>
#include <string.h>


int main() {
      char str[1001]; 
    scanf("%s", str); 

int len = strlen(str);
    int palindrome=1;

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            palindrome = 0; 
            break;
        }
    }

    if (palindrome)
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    
    return 0;
}