#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double soma, media;
    int N;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
        soma = soma + vet[i];
    }

    printf("Valores do vetor: ");
    for (int i = 0; i < N; i++){
        printf("%.1lf ", vet[i]);
    }

    media = soma / N;

    printf("\nSoma: %.2lf\n", soma);
    printf("Media: %.2lf", media);

    return 0;
}
