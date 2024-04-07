// Odd Even Program
// A number is taken into consideration even though it may be split by two equally.
//The remainder that is not precisely divisible by 2 is known as an odd number.
//Simply expressed, odd numbers adopt the form n = 2k+1, whereas even numbers take the form n = 2k. Each integer will be made up of either even or odd integers.

// Input:

// 10
// Output:

// Even
// Input:

// 15
// Output:

// Odd

#include <stdio.h>
int main(){
    int num1;
    printf("Input the one number \n");
      scanf("%d", &num1);
if(num1 % 2 == 0){
    printf("%d = EVEN \n", num1);
}
else printf("%d = ODD \n", num1);


return 0;
}