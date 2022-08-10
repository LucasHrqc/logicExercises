#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    double a, b, c, areaq, areatri, areatra;

    printf("Digite a medida A: ");
    scanf("%lf", &a);

    printf("Digite a medida B: ");
    scanf("%lf", &b);

    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaq = pow(a, 2.0);
    areatri = b * a / 2.0;
    areatra = (a + b) / 2.0 * c;

    printf("\nArea do quadrado: %.4lf\n", areaq);
    printf("Area do triangulo: %.4lf\n", areatri);
    printf("Area do trapezio: %.4lf\n", areatra);

    return 0;
}
