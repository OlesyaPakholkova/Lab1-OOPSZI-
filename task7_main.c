#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

double x, result;
void f();

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
