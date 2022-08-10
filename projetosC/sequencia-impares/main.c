#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int x, i;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for (i = 1; i<=x; i++){
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
