#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void f();
double x, result;

void main()
{
    x = 4;
    f();
    printf("%lf\n", result);
    scanf("%lf", &x);
    f();
    printf ("%lf", result);
    _getch();
}

void f()
{
    result = (pow(x,2) + 2*x - 3 + (x+1) * sqrt(pow(x,2)-9))/(pow(x,2) - 2*x - 3 + (x+1) * sqrt(pow(x,2)-9));
}
