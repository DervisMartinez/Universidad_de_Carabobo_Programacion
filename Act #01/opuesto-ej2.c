#include <stdio.h>

int main() {
    int numero;
    printf("Introduce un número del 1 al 6: ");
    scanf("%d", &numero);

    int opuesto = 7 - numero;

    switch(opuesto) {
        case 1: printf("Uno\n"); break;
        case 2: printf("Dos\n"); break;
        case 3: printf("Tres\n"); break;
        case 4: printf("Cuatro\n"); break;
        case 5: printf("Cinco\n"); break;
        case 6: printf("Seis\n"); break;
        default: printf("Número inválido.\n");
    }

    return 0;
}
