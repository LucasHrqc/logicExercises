 #include <stdio.h>
 #include <string.h>

 int main () {

    int a, b;
    double resultado1;
    double resultado2;

    a = 5;
    b = 2;

    resultado1 = (double)a / b;
    resultado2 = a / b;
    /*Se voc� fizer a divis�o de dois n�meros inteiros ele entende que
    voc� quer a parte inteira do resultado.*/

    printf("Resultado: %lf\n", resultado1);
    printf("Resultado 2: %lf\n", resultado2);

    double x;
    int y;

    x = 5.0;
    y = (int) x;
    /*Se voc� atribuir variaveis doubles em inteiros � poss�vel*/

    printf("y = %d\n", y);

    return 0;
 }
