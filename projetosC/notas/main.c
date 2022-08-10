#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    double nota1, nota2, soma;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    soma = (nota1 + nota2);

    printf("\nNota Final: %.1lf\n", soma);

    if (soma < 60.0) {
            printf("Reprovado");
    }

    return 0;
}
