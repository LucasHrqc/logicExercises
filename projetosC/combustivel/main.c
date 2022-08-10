#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int tipoc, conta, contg, contd;

    conta = 0;
    contg = 0;
    contd = 0;

    printf("Informe um codigo (1, 2, 3) ou 4 para encerrar: ");
    scanf("%d", &tipoc);

    while (tipoc != 4) {
        if (tipoc == 1) {
            conta = conta + 1;
        }
        else if (tipoc == 2) {
            contg = contg + 1;
        }
        else if (tipoc == 3) {
            contd = contd + 1;
        }

        printf("Informe um codigo (1, 2, 3) ou 4 para encerrar: ");
        scanf("%d", &tipoc);
    }

    printf("Muito obrigado \n");
    printf("Alcool: %d\n", conta);
    printf("Gasolina: %d\n", contg);
    printf("Diesel: %d\n", contd);

    return 0;
}
