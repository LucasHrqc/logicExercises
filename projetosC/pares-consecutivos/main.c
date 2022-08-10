#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int x, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    while (x != 0) {
        if (x % 2 == 0) {
            soma = 5 * x + 20;
        }
        else {
            soma = 5 * x + 25;
        }
        printf("Soma: %d\n", soma);
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
    }

    return 0;
}
