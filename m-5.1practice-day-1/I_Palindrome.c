#include <stdio.h>
#include <string.h>


int main() {
     char str[100];
    fgets(str, 100, stdin);

    int low = 0;
    int high = strlen(str) - 1;
    int palindrome=0;

    while (low < high) {
        if (str[low] != str[high]) {
            palindrome=0;
        }else{
            palindrome=1;
        }
        low++;
        high--;
    }
    if (palindrome)
    {
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    return 0;
}



//....... write answer .....

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char txt[1001]; 
//     scanf("%s", txt); 

//     int len = strlen(txt);
//     int isPalindrome = 1; 

//     for (int i = 0; i < len / 2; i++) {
//         if (txt[i] != txt[len - 1 - i]) {
//             isPalindrome = 0; 
//             break;
//         }
//     }

//     if (isPalindrome) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }