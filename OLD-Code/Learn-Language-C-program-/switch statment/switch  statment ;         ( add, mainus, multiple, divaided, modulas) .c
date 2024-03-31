#include<stdio.h>
int main()
{
    int a,b,c,m;
    printf ("\n                 please enter the number-1:    ");
    scanf ("%d",&a);
    printf ("\n                 please enter the number-2:    ");
    scanf ("%d",&b);
    printf ("\n\n\n\n\n                option :   ");
    scanf ("%d",&c);
    switch (c){
        case 1:{
            m=a+b;
            printf ("                                          add = %d\n\n\n\n\n\n",m);
            break;
        } case 2:{
            m=a-b;
            printf ("                                       subtract = %d\n\n\n\n\n\n",m);
            break;
        } case 3:{
            m=a*b;
            printf ("                                          multiply = %d\n\n\n\n\n\n",m);
            break;
        } case 4:{
            m=a/b;
            printf ("                                          divide = %d\n\n\n\n\n\n",m);
            break;
        } case 5:{
            m=a%b;
            printf ("                                         remainder = %d\n\n\n\n\n\n",m);
            break;
        } default:{
            printf ("                                         unwanted value\n\n\n\n\n\n");
            break;
        }
    }
}
