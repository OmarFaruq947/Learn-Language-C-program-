// Calculate-the-Percentage of 5 Subjects
// It is simple to calculate the percentage of five subjects,
// all you need to do is add all of the marks and multiply that total by 100.
// Then divide that by the total number of marks a student is permitted to receive.
// You will ultimately receive the results as a percentage of the 5 subjects.
//Input: 50 20 30 40 80

// Output:
// Enter marks of five subjects:
// Total marks = 220.00
// Average marks = 44.00
// Percentage = 44.00

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