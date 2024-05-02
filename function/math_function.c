#include<stdio.h>
#include<math.h>
int main()
{
// double x;
int x,y;
scanf ("%d %d", &x, &y);
// int ans = ceil(x); // ceiling function
// int ans2 = floor(x);  // floor function

// int ans3 = round(x); // rounding

// int ans4 = sqrt(x);
// printf("%0.2lf", ans4);

double ans5 = pow(x,y);
printf("%0.3lf\n", ans5);

    return 0;
}