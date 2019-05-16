#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f();

void main()
{
    double  x = 4;
    printf("%lf\n", f(x));
    scanf("%lf", &x);
    printf ("%lf", f(x));
    _getch();
}

double f(double x)
{
    return (pow(x,2) + 2*x - 3 + (x+1) * sqrt(pow(x,2)-9))/(pow(x,2) - 2*x - 3 + (x+1) * sqrt(pow(x,2)-9));
}
