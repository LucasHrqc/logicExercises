#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double b, a, area, perimetro, diag;

    printf("Base do retangulo: ");
    scanf("%lf", &b);
    printf("Altura do retangulo: ");
    scanf("%lf", &a);

    area = b * a;
    perimetro = 2.0 * (b + a);
    diag = sqrt(pow(a, 2.0) + pow(b, 2.0));

    printf("Area = %.4lf\n", area);
    printf("Perimetro = %.4lf\n", perimetro);
    printf("Diagonal = %.4lf\n", diag);

    return 0;
}
