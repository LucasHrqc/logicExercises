#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N;

    printf("Qual o tamanho do vetor? ");
    scanf("%d", &N);

    int vetA[N];
    int vetB[N];
    int vetC[N];

    printf("Digite os valores do vetor A: \n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetA[i]);
    }

    printf("Digite os valores do vetor B: \n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetB[i]);
    }

    printf("Vetor Resultante: \n");
    for (int i = 0; i < N; i++) {
        vetC[i] = vetA[i] + vetB[i];
        printf("%d\n", vetC[i]);
    }

    return 0;
}
