#include<stdio.h>
int main(){

int count, score, total;
count = total =0;
while (count<4)
{
    printf("\n Enter Your Score: ");
    scanf("%d", &score);
    if((score<0) || (score>100))
    continue;
    total += score;
    printf(" total score is:  %d \n", total);
    count++;
}


return 0;

}