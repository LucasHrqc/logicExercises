#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, soma;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    soma = 0;
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            soma = soma + mat[i][j];
        }
    }

    printf("Soma dos valores acima da diagonal principal: %d\n", soma);

    return 0;
}
