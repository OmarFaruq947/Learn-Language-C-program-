#include<stdio.h>
int main() {
int n;
scanf ("%d", &n);
int s=n-1;
int star=1;

for (int i = 1; i <=n; i++){
// one line
    for (int j = 1; j<=s; j++){
    printf(" "); 
    }
    s--;

    for (int j = 1; j<=star; j++){
    printf("*"); 
    }
    star +=2;
    printf("\n");
}



  for (int i = n-1; i >= 0; i--) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        // Print stars
        for (star = 0; star < 2 * i + 1; star++) {
            printf("*");
        }
        printf("\n");
    }



  return 0;
}