#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int X, Y;

    X = 1;
    Y = 2;
    while (X != Y){
        printf("Digite dois numeros: \n");
        scanf("%d", &X);
        scanf("%d", &Y);

        if (X > Y){
            printf("Decrescente\n");
        }
        else if(Y > X) {
            printf("Crescente\n");
        }
    }

    return 0;
}
