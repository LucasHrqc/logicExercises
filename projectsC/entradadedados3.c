#include <stdio.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main(){

    double salario1, salario2;
    char nome1[50], nome2[50];
    int idade;
    char sexo;

    printf("Digite o nome da primeira pessoa: ");
    ler_texto(nome1, 50);
    printf("Digite o salario da primeira pessoa: ");
    scanf("%lf", &salario1);

    printf("Digite o nome da segunda pessoa: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Digite o salario da segunda pessoa: ");
    scanf("%lf", &salario2);

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    printf("Digite um sexo (F/M): ");
    limpar_entrada();
    scanf("%c", &sexo);

    printf("Nome 1: %s\n", nome1);
    printf("Salario 1: %lf\n", salario1);
    printf("Nome 2: %s\n", nome2);
    printf("Salario 2: %lf\n", salario2);
    printf("Idade: %d\n", idade);
    printf("Sexo: %c\n", sexo);

    return 0;
}
