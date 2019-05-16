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
