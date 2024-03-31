#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,D,r1,r2;
    printf("enter the value : ");
    scanf ("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if (b>=0){
        D=sqrt(d);
        r1=(-b+D)/(2*a);
        r2=(-b-D)/(2*a);

        printf("the roots are %d",r1);
        printf("the roots are %d",r2);
    }

        else{
            printf ("invalid");
        }
        return 0;

}
