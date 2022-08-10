#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    double dist, gasto, consumo;

    printf("Distancia percorrida: ");
    scanf("%lf", &dist);

    printf("Combustivel gasto: ");
    scanf("%lf", &gasto);

    consumo = dist / gasto;

    printf("\n Consumo medio: %.4lf\n", consumo);

    return 0;
}
