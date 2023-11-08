#include <stdio.h>

int main() {
    char nombre[50], apellido[50], cedula[20];
    int tiempo;
    float sueldo_anual, sueldo_mensual, bono;

    printf("Introduce tu nombre: ");
    scanf("%s", nombre);
    printf("Introduce tu apellido: ");
    scanf("%s", apellido);
    printf("Introduce tu cédula: ");
    scanf("%s", cedula);
    printf("Introduce el tiempo que llevas trabajando (en años): ");
    scanf("%d", &tiempo);

    if (tiempo >= 10) {
        sueldo_anual = 300000;
    } else if (tiempo >= 5) {
        sueldo_anual = 190000;
    } else {
        sueldo_anual = 120000;
    }
                                        //Cálculo del sueldo mensual y el bono: 
    sueldo_mensual = sueldo_anual / 12; //Se calcula el sueldo mensual dividiendo el sueldo anual por 12
    bono = sueldo_mensual * 3;          //y el bono multiplicando el sueldo mensual por 3.


    printf("\nNombre: %s\n", nombre);
    printf("Apellido: %s\n", apellido);
    printf("Cedula: %s\n", cedula);
    printf("Sueldo Mensual: %.2f Bs\n", sueldo_mensual);
    printf("Sueldo Anual: %.2f Bs\n", sueldo_anual);
    printf("Tiempo de Servicio: %d años\n", tiempo);
    printf("Bono Extra: %.2f Bs\n", bono);
    return 0;
}

