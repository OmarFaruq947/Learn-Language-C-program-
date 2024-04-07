#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if(a>=97 && a<=122){
        int ans = a-32;
        printf("%c", ans);
    } else{
        int ans = a+32;
        printf("%c", ans);
    }
    return 0;
}


    // if(a>='a' && a<='z'){
    //     int ans = a-32;
    //     printf("%c", ans);
    // } else{
    //     int ans = a+32;
    //     printf("%c", ans);
    // }