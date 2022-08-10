#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int M, N;
    printf("Numero de linhas da matriz: ");
    scanf("%d", &M);
    printf("Numero de colunas da matriz: ");
    scanf("%d", &N);

    int mat[M][N];

    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nValores negativos:\n");
    for (int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if (mat[i][j] < 0){
                printf("%d ", mat[i][j]);
            }
        }
    }

    return 0;
}
