#include <stdio.h>
#include <string.h>

int main ()
{
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    printf("Digite o valor da idade: ");
    scanf("%d", &idade);

    printf("Digite o valor do salario: ");
    scanf("%lf", &salario);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    printf("Digite o nome da pessoa: ");
    scanf("%s", nome); /*Vetores não precisam de & e não aceita espaços em brancos*/

    printf("\n");
    printf("NOME = %s\n",nome);
    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);

    return 0;
}
