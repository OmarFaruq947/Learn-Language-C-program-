#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int counts[M + 1];
    for (int i = 0; i <= M; i++) {
        counts[i] = 0; 
        printf("=> %d", i);
    }

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        counts[num]++;
    }

    for (int i = 1; i <= M; i++) {
        printf("%d\n", counts[i]); 
    }

    return 0;
}
