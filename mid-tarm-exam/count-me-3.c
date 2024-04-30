#include<stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char S[10001];
        scanf("%s", S); 
        
        int cnt_lower = 0, cnt_number = 0, cnt_upper = 0;
        
        for (int i = 0; S[i] != '\0'; i++) {
            char c = S[i];
            if (c >= 'a' && c <= 'z')
            {
                cnt_lower++; 
            }
            else if (c >= 'A' && c <= 'Z')
            {
                cnt_upper++; 
            }
            else if (c >= '0' && c <= '9')
            {
                cnt_number++;
            }
        }
        
        printf("%d %d %d\n", cnt_upper, cnt_lower, cnt_number);
    }

    return 0;
}
