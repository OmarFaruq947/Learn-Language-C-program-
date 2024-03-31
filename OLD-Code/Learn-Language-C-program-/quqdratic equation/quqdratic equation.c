#include<stdio.h>
#include<math.h>
int main()
{
    float x,z,a,b,c,d,D,r1,r2;
    printf ("please enter the value : ");
    scanf ("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    if (D>=0)
    {
    z= sqrt(D);
    r1=(-b+z)/(2*a);
    r2=(-b-z)/(2*a);
    printf ("the value of r1 : %d\n",r1);
    printf ("the value of r1 : %d\n",r2);
    }
    return 0;

}
