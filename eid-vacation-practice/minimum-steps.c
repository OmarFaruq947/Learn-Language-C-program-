#include <stdio.h>

int main() {
    int x, min_steps;
    scanf("%d", &x);

    if (x <= 3)
        min_steps = 1;
    else if (x % 3 == 0)
        min_steps = x / 3;
    else
        min_steps = (x / 3) + 1;

    printf("%d\n", min_steps);

    return 0;
}
