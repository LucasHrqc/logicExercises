#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int n, i, j;
    double somap;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    double mat[n][n];

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    somap = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (mat[i][j] >= 0){
                somap = somap + mat[i][j];
            }
        }
    }
    printf("Soma dos valores positivos: %.1lf", somap);

    printf("\n\nEscolha uma linha: ");
    scanf("%d", &i);
    printf("Linha escolhida: ");
    for (j = 0; j < n; j++){
        printf("%.1lf ", mat[i][j]);
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &j);
    printf("Coluna escolhida: ");
    for (i = 0; i < n; i++){
        printf("%.1lf ", mat[i][j]);
    }

    printf("\n\nDiagonal Principal: ");
    for (i = 0; i < n; i++){
        printf("%.1lf ", mat[i][i]);
        }

    printf("\n\nMatriz Alterada: \n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (mat[i][j] < 0){
                mat[i][j] = mat[i][j] * mat[i][j];
            }
            printf("%.1lf ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
