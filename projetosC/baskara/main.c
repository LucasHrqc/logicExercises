#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{

    double x1, x2, a, b, c, delta;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = (pow(b, 2.0) - 4 * a * c);

    if (delta < 0 || a == 0) {
        printf("\nEsta equacao nao possui raizes reais.\n");
    }
    else {
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a);
        printf("X1: %.4lf\n", x1);
        printf("X2: %.4lf\n", x2);
    }

    return 0;
}
