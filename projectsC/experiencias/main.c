#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    char tipoc;
    int testes, qtd, contr, conts, contc, i;
    double pc, pr, ps, totalc;

    contc = 0;
    contr = 0;
    conts = 0;

    printf("Quantos testes serao realizados? ");
    scanf("%d", &testes);

    for (i = 0; i<=testes-1; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtd);
        limpar_entrada();
        printf("Tipo de cobaia: ");
        scanf("%c", &tipoc);

        if (tipoc == 'R' || tipoc == 'r') {
            contr = contr + qtd;
        }
        else if (tipoc == 'S' || tipoc == 's') {
            conts = conts + qtd;
        }
        else if (tipoc == 'C' || tipoc == 'c') {
            contc = contc + qtd;
        }
    }

    totalc = contc + contr + conts;
    pc = contc / totalc * 100;
    pr = contr / totalc * 100;
    ps = conts / totalc * 100;

    printf("Relatorio final: \n");
    printf("Total de Cobaias: %lf\n", totalc);
    printf("Total de Coelhos: %d\n", contc);
    printf("Total de Ratos: %d\n", contr);
    printf("Total de Sapos: %d\n", conts);
    printf("Percentual de Coelhos: %.2lf\n", pc);
    printf("Percentual de Ratos: %.2lf\n", pr);
    printf("Percentual de Sapos: %.2lf\n", ps);

    return 0;
}
