#include <stdio.h>
#include <string.h>

int main() {
    char str[11], str2[11];
    
    // Read two strings
    scanf("%s", str);
    scanf("%s", str2);
    
    // Calculate sizes of A and B
    int size_str = strlen(str);
    int size_str2 = strlen(str2);
    
    // Concatenate A and B
    char concatenated[22];
    strcpy(concatenated, str);
    strcat(concatenated, str2);
    
    // Swap the first characters
    char temp = str[0];
    str[0] = str2[0];
    str2[0] = temp;
    
    // Print the results
    printf("%d %d\n", size_str, size_str2);
    printf("%s\n", concatenated);
    printf("%s %s\n", str, str2);
    
    return 0;
}
