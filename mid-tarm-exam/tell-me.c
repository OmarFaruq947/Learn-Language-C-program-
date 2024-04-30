#include <stdio.h>

int main() {
    int test_case;
    scanf("%d", &test_case);

    while (test_case--) {
        int number_of_array;
        scanf("%d", &number_of_array);

        int A[number_of_array]; 
        for (int i = 0; i < number_of_array; i++) {
            scanf("%d", &A[i]);
        }

        long long int checking_value;
        scanf("%lld", &checking_value);

        
        int flag = 0;
        for (int i = 0; i < number_of_array; i++) {
            if (A[i] == checking_value) {
                flag++;
                break;
            }
        }

        if (flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
