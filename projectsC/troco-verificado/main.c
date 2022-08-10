#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    double troco, precoun, pago;
    int qtd;

    printf("Preco unitario: ");
    scanf("%lf", &precoun);

    printf("Quantidade comprada: ");
    scanf("%d", &qtd);

    printf("Dinheiro recebido: ");
    scanf("%lf", &pago);

    troco = pago - (precoun*qtd);

    if (troco < 0){
        troco = precoun*qtd - pago;
        printf("Faltou: %.2lf\n", troco);
    }
    else {
        printf("Troco: %.2lf\n", troco);
    }

    return 0;
}
