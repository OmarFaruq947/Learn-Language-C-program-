// lexicographical comparison

#include<stdio.h>
#include<string.h>
int main()
{
    int size=100;
char A[size], B[size];

scanf ("%s %s", &A, &B);


int i=0;
while (1)
{
   if (A[i]=='\0' && B[i]=='\0')
   {
    printf("Same \n");
    break;
   }
   else if(A[i] == '\0'){
    printf("-A choto \n");
    break;
   }
   else if(B[i] == '\0'){
    printf("B choto \n");
    break;
   }


   if(A[i] == B[i]){
    i++;
   }else if(A[i] < B[i]){
    printf("--A choto \n");
    break;
   }else {
    printf("B choto \n");
    break;
   }
}



    return 0;
}