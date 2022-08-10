#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int N, i, x, contd, contf;
    contd = 0;
    contf = 0;

    printf("Quantos numeros serao digitados? ");
    scanf("%d", &N);

    for (i = 0; i<=N-1; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x >= 10 && x <= 20) {
            contd = contd + 1;
        }
        else {
            contf = contf + 1;
        }
    }

    printf("Dentro: %d\n", contd);
    printf("Fora: %d\n", contf);

    return 0;
}
