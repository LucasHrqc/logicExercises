#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N, cont1, cont12, cont2;
    double vtcompra, vtvenda, lucrot, a;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);

    char nomes[N][50];
    double pcompra[N];
    double pvenda[N];

    for (int i = 0; i < N; i++){
        printf("Produto %d\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("Preco de compra: ");
        scanf("%lf", &pcompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &pvenda[i]);
    }

    cont1 = 0;
    cont12 = 0;
    cont2 = 0;
    for (int i = 0; i < N; i++){
            a = (pvenda[i]/pcompra[i] - 1);
        if ( a < 0.1){
            cont1 = cont1 + 1;
        }
        else if ( a >= 0.1 && a <= 0.2){
            cont12 = cont12 + 1;
        }
        else {
            cont2 = cont2 + 1;
        }
    }

    vtcompra = 0;
    vtvenda = 0;
    for (int i = 0; i < N; i++){
        vtcompra = vtcompra + pcompra[i];
        vtvenda = vtvenda + pvenda[i];
    }

    lucrot = vtvenda - vtcompra;

    printf("\nRelatorio:\n");
    printf("Lucro abaixo de 10%%: %d\n", cont1);
    printf("Lucro entre 10%% e 20%%: %d\n", cont12);
    printf("Lucro acima de 20%%: %d\n", cont2);
    printf("Valor total de compra: %.2lf\n", vtcompra);
    printf("Valor total de venda: %.2lf\n", vtvenda);
    printf("Lucro total: %.2lf\n", lucrot);

    return 0;
}
