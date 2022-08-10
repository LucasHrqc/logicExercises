#include <stdio.h>
#include <string.h>

int main () {

    double b1, b2, h, area;

    b1 = 6.0;
    b2 = 8.0;
    h = 5.0;
    area = (b1+b2) / 2.0 * h;

    printf("Area = %.4lf\n",area);

    return 0;
}

