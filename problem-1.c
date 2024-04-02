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
    int num1, num2, num3, num4, num5;
    printf("Input the 5 numbers \n");
     printf("Input the 1st number \n");
      scanf("%d", &num1);
     printf("Input the 2nd number \n");
      scanf("%d", &num2);
     printf("Input the 3rd number \n");
     scanf("%d", &num3);
     printf("Input the 4th number \n");
     scanf("%d", &num4);
     printf("Input the 5th number \n");
     scanf("%d", &num5);
     printf("Number successfully input DONE \n");
     float sum = num1 + num2 + num3 + num4 + num5;

printf("Total marks = %.2f \n", sum);
float average = sum/5;
printf("Average marks = %.2f \n",average);
float Percentage = (sum/500.00)*100;
printf("percentage marks = %.2f \n", Percentage);



return 0;
    
}