#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("Linhas da Matriz: ");
    scanf("%d", &m);
    printf("Colunas da Matriz: ");
    scanf("%d", &n);

    int mata[m][n];
    int matb[m][n];
    int matc[m][n];

    printf("Digite os valores da Matriz A\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mata[i][j]);
        }
    }

    printf("Digite os valores da Matriz B\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matb[i][j]);
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            matc[i][j] = mata[i][j] + matb[i][j];
        }
    }

    printf("\nMatriz Soma:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", matc[i][j]);
        }
        printf("\n");
    }

    return 0;
}
