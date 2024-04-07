#include<stdio.h>
#include<ctype.h> /*not extrimly requarment*/
main()
{
    char x;
    printf ("enter a small letter: ");
    x=getchar();
    printf("capital letter:");
    putchar(toupper(x));
    return 0;
}
