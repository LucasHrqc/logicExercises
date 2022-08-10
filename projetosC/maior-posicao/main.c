#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N, i, pos;
    double maior;

    printf("Quantos numeros serao digitados? ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    maior = vet[0];
    for (i = 0; i < N; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            pos = i;
        }
    }

    printf("\nMaior valor: %.1lf", maior);
    printf("\nPosicao do maior valor: %d", pos);

    return 0;
}
