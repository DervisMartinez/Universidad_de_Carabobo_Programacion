#include <stdio.h>

int main() {
    char nombre_completo[100];
    int cedula, tiempo;
    float sueldoAnual, sueldoMensual, bono;

    printf("Introduce el nombre completo del empleado: ");
    scanf(" %[^\n]", nombre_completo);

    printf("Introduce la cedula del empleado: ");
    scanf("%d", &cedula);

    printf("Introduce el tiempo de servicio del empleado (en años): ");
    scanf("%d", &tiempo);

    if (tiempo >= 10) {
        sueldoAnual = 300000;
    } else if (tiempo >= 5) {
        sueldoAnual = 190000;
    } else {
        sueldoAnual = 120000;
    }
                                       //Cálculo del sueldo mensual y el bono: 
    sueldoMensual = sueldoAnual / 12; //Se calcula el sueldo mensual dividiendo el sueldo anual por 12
    bono = sueldoMensual * 3;          //y el bono multiplicando el sueldo mensual por 3.

    printf("\nNombre Completo: %s\n", nombre_completo);
    printf("Cedula: %d\n", cedula);
    printf("Sueldo Mensual: %.2f Bs\n", sueldoMensual);
    printf("Sueldo Anual: %.2f Bs\n", sueldoAnual);
    printf("Tiempo de Servicio: %d años\n", tiempo);
    printf("Bono Extra: %.2f Bs\n", bono);

    return 0; 
}
