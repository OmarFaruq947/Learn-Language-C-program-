#include <stdio.h>

int main() {

  int N, rv = 0, rm;

  scanf("%d", &N);

  while (N != 0) {
    rm = N % 10;
    rv = rv * 10 + rm;
    N = N/10;
  }
  printf("%d", rv);
  return 0;
}