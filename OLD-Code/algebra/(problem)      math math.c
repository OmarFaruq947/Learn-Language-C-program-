#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z,m,w,a,b,c,r1,r2;
    printf ("enter the value : ");
    scanf ("%d%d%d",&a,&b,&c);
    x=b*b;
    y=4*a*c;
    m=x-y;
    w=2*a;

    if (m>=0);{
    z=sqrt(m);
    r1=(-b+z)/w;
    r2=(-b-z)/w;
    printf("the roots are : %d\n",r1);
    printf("the roots are : %d\n",r2);
    }

    return 0;


}
