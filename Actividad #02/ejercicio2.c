#include <stdio.h>

int main() {
    int numAnterior = 0, numActual = 0;

    printf("Ingrese el primer número: ");
    scanf("%d", &numAnterior);

    while(1) {      // crea un bucle infinito hasta que se cumpla la condicion 
        printf("Ingrese el siguiente número: ");
        scanf("%d", &numActual);

        if(numActual % numAnterior == 0) {
            printf("%d es divisible por %d\n", numActual, numAnterior);
            break;
        }

        numAnterior = numActual;
    }

    return 0;
}
