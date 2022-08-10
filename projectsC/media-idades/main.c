#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int idade, cont;
    double media, soma;

    soma = 0;
    cont = 0;
    printf("Digite as idades: \n");
    scanf("%d", &idade);

    if (idade < 0){
        printf("Impossivel calcular.\n");
    }
    else {
    while (idade > 0) {
        soma = soma + idade;
        cont = cont + 1;
        scanf("%d", &idade);
    }

    media = soma / cont;
    printf("Media: %.2lf", media);
    }

    return 0;
}
