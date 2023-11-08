#include <stdio.h>

int main() {
    char nombre[50], apellido[50], cedula[50];
    int tiempo;
    float sueldoAnual, sueldoMensual, bono;

    printf("Introduce el nombre del empleado: ");
    scanf("%s", nombre);

    printf("Introduce el apellido del empleado: ");
    scanf("%s", apellido);

    printf("Introduce la cedula del empleado: ");
    scanf("%s", cedula);

    printf("Introduce el tiempo de servicio del empleado (en años): ");
    scanf("%d", &tiempo);

    switch (tiempo) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
            sueldoAnual = 120000;
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            sueldoAnual = 190000;
            break;
        default:
            sueldoAnual = 300000;
            break;
    }

    sueldoMensual = sueldoAnual / 12;
    bono = sueldoMensual * 3;

    printf("\nNombre: %s\n", nombre);
    printf("Apellido: %s\n", apellido);
    printf("Cedula: %s\n", cedula);
    printf("Sueldo Mensual: %.2f Bs\n", sueldoMensual);
    printf("Sueldo Anual: %.2f Bs\n", sueldoAnual);
    printf("Tiempo de Servicio: %d años\n", tiempo);
    printf("Bono Extra: %.2f Bs\n", bono);

    return 0;
}
