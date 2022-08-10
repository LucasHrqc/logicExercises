#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N;
    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    double mat[N][N];
    double maior;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    maior = mat[0][0];
    printf("\nMaior elemento de cada linha: \n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
        printf("%.0lf\n", maior);
        maior = mat[i+1][0];
    }

    return 0;
}
