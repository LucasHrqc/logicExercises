#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double s1, nsal, aumento, porc;

    printf("Digite o salario do funcionario: ");
    scanf("%lf", &s1);

    if (s1 <= 1000.0){
        nsal = s1 * 1.20;
        aumento = nsal - s1;
        porc = 20.0;
    }
    else if (s1 <= 3000.0){
        nsal = s1 * 1.15;
        aumento = nsal - s1;
        porc = 15.0;
    }
    else if (s1 <= 8000.0){
        nsal = s1 * 1.10;
        aumento = nsal - s1;
        porc = 10.0;
    }
    else{
        nsal = s1 * 1.05;
        aumento = nsal - s1;
        porc = 5.0;
    }

    printf("Novo salario: R$%.2lf\n", nsal);
    printf("Aumento: R$%.2lf\n", aumento);
    printf("Porcentagem: %.2lf %", porc);

    return 0;
}
