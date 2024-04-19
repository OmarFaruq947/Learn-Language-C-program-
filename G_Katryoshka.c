#include <stdio.h>

int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long max_katryoshkas = 0;

    // Case 1: Two eyes and one body
    long long possible_katryoshkas = (n >= 2 && k >= 1) ? (n / 2 > k ? k : n / 2) : 0;
    if (possible_katryoshkas > max_katryoshkas)
        max_katryoshkas = possible_katryoshkas;

    // Case 2: Two eyes, one mouth, and one body
    possible_katryoshkas = (n >= 2 && m >= 1 && k >= 1) ? ((n / 2 > k) ? k : n / 2) : 0;
    if (possible_katryoshkas > max_katryoshkas)
        max_katryoshkas = possible_katryoshkas;

    // Case 3: One eye, one mouth, and one body
    possible_katryoshkas = (n >= 1 && m >= 1 && k >= 1) ? ((n > k) ? (k > m ? m : k) : (n > m ? m : n)) : 0;
    if (possible_katryoshkas > max_katryoshkas)
        max_katryoshkas = possible_katryoshkas;

    printf("%lld\n", max_katryoshkas);

    return 0;
}
