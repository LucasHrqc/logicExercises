#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x, soma;

    soma = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &x);

    while (x != 0) {
        soma = soma + x;
        printf("Digite outro numero: ");
        scanf("%d", &x);
    }

    printf("Soma = %d\n", soma);

    return 0;
}
