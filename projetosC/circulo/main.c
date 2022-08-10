#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.14159

int main()
{
    double r, area;

    printf("Digite o valor do raio: ");
    scanf("%lf", &r);

    area = PI* pow(r, 2.0);

    printf("Area: %.3lf\n", area);

    return 0;
}
