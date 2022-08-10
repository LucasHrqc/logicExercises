#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
    double d1, d2, d3, maior;

    printf("Digite as distancias: \n");
    scanf("%lf", &d1);
    scanf("%lf", &d2);
    scanf("%lf", &d3);

    if (d1 > d2 && d1 > d3){
        printf("Maior: %.2lf",d1);
    }
    else if (d2 > d3) {
        printf("Maior: %.2lf",d2);
    }
    else{
        printf("Maior: %.2lf",d3);
    }

    return 0;
}
