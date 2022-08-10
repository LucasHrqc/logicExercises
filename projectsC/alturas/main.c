#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int N, contmenor;
    double porcent, media, soma;

    printf("Quantidade de pessoas: ");
    scanf("%d", &N);

    int idades[N];
    double alturas[N];
    char nomes[N][50];

    for (int i = 0; i < N; i++) {
        printf("Dados da %d pessoa:\n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }


    soma = 0;
        for (int i = 0; i < N; i++) {
        soma = soma + alturas[i];
    }

    media = soma / N;
    printf("\nAltura media: %.2lf\n", media);


    contmenor = 0;
    for (int i = 0; i < N; i++) {
        if (idades[i] < 16) {
            contmenor = contmenor + 1;
        }
    }
    porcent = (double) contmenor / N * 100.0;
    printf("Pessoas com menos de 16 anos: %.1lf%% \n", porcent);


    for (int i = 0; i < N; i++) {
        if (idades[i] < 16){
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
