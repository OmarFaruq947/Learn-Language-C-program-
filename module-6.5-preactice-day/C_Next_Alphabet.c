#include<stdio.h>
#include<math.h>
int main()
{
char C, result, next_alphabet;
scanf ("%c", &C);
char Lw =  tolower();
result = tolower(C);

if( C == 'z' || C == 'Z'){
    next_alphabet = result - 25;
    printf("%c\n", next_alphabet);
}else{
next_alphabet = result + 1;
printf("%c\n", next_alphabet); 
}


    return 0;
}