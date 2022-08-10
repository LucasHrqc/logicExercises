#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int M, N;
    double soma;

    printf("Quantidade de linhas da matriz: ");
    scanf("%d", &M);
    printf("Quantidade de colunas da matriz: ");
    scanf("%d", &N);

    double mat[M][N];
    double vet[M];

    for (int i = 0; i < M; i++) {
        printf("Digite os elementos da %da linha:\n", i+1);
        for (int j = 0; j < N; j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    printf("Vetor Gerado: \n");
    soma = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++){
            soma = soma + mat[i][j];
        }
        vet[i] = soma;
        printf("%.1lf\n", vet[i]);
        soma = 0;
    }

    return 0;
}
