#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    double x = 4;
    double f = (pow(x,2) + 2*x - 3 + (x+1) * sqrt(pow(x,2)-9))/(pow(x,2) - 2*x - 3 + (x+1) * sqrt(pow(x,2)-9));
    printf("%lf\n", f);
    scanf("%lf", &x);
    f = (pow(x,2) + 2*x - 3 + (x+1) * sqrt(pow(x,2)-9))/(pow(x,2) - 2*x - 3 + (x+1) * sqrt(pow(x,2)-9));
    printf ("%lf", f);
    _getch();
}


