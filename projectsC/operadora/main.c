#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int min;
    double preco;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &min);

    if (min <= 100) {
        preco = 50.0;
    }
    else{
        preco = 50.0 + (2.0 *(min - 100));
    }

    printf("\nValor a pagar: R$%.2lf\n", preco);

    return 0;
}
