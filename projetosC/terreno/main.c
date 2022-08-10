#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double l, c, preco, valor, area;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &l);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &c);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);

    preco = l * c * valor;
    area = l * c;

    printf("Area do terreno: %.2lf\n", area);
    printf("Preco do terreno: %.2lf", preco);

    return 0;
}
