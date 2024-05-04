#include <stdio.h>
#include <string.h>


int is_palindrome(char txt[]){
        
    int len = strlen(txt);
    

int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (txt[i] != txt[len - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }

    return isPalindrome;

}

int main() {
    char txt[1001]; 
    scanf("%s", txt); 
 
        int result = is_palindrome(txt) ;
   
    if (result) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}