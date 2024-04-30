#include<stdio.h>
#include<math.h>

int main() {
int T;
scanf ("%d", &T);

while (T--)
{

    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);

    int total_farmers = m1 + m2;

    double value = floor((double)m1 / total_farmers * d);

    int result = d-value;
    printf("%d\n", (int)result);
}


    return 0;
}
