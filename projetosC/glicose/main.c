#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double glicose;

    printf("Medida da Glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100.0){
        printf("\nClassificacao: normal.\n");
    }
    else if (glicose <= 140.0){
        printf("\nClassificacao: elevado.\n");
    }
    else{
        printf("\nClassificacao: diabetes.\n");
    }

    return 0;
}
