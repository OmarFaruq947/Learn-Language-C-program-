// #include<stdio.h>

// // return_type name(parameter){
// //     code
// //     return what ?
// // }
// int sum(int x, int y){
// return x+y;
// }

// int main()
// {
//  printf("%d\n", sum(5, 8));
//     return 0;
// }





// return type + no parameter
// #include<stdio.h>
// int sum(){
// int x,y;
// scanf ("%d %d", &x, &y);
// return x+y;
// }
// int main()
// {
// printf("%d", sum());
//     return 0;
// }


// // return type + no parameter

// #include<stdio.h>
// int sum(void){
//     int a,b;
//     scanf ("%d %d", &a, &b);
//     return a+b;
// }
// int main()
// {
// printf("%d", sum());
//     return 0;
// }






// no return type + parameter

// #include<stdio.h>
// int sum(int a, int b){
//     printf("%d", a+b);
// }
// int main()
// {
//     int a,b;
//     scanf ("%d %d", &a, &b);
// sum(a,b);
//     return 0;
// }


// no return type + no parameter

#include<stdio.h>
int sum(void){
    int a,b;
    scanf ("%d %d", &a, &b);
    printf("%d", a+b);
}
int main()
{
    sum();
    return 0;
}