#include<stdio.h>
#include<math.h>
int main()
{
int N;
scanf ("%d", &N);
int a = N/10;  
int x = N%10 ;  


if( 10 <= N <= 99 ){
   
    if ( N != 0 && x != 0 && (a%x == 0 || x%a == 0 ))
    {
        printf("YES");
    }else if(x == 0 ){
        printf("YES");
    } else printf("NO");
       
    }

    return 0;
}

