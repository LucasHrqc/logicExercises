#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    int N, cont, soma;

    printf("Quantos valores serao digitados? ");
    scanf("%d", &N);

    int vet[N];

    for (int i=0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNumeros pares: ");
    cont = 0;
    for (int i=0; i < N; i++) {
        if (vet[i] % 2 == 0) {
            cont = cont + 1;
            printf("%d ", vet[i]);
        }
    }

    printf("\nQuantidade de numeros pares: %d ", cont);

    return 0;
}
