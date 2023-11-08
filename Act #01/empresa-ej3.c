#include <stdio.h>

int main(){
char nombre[50], apellido[50]; 
    int cedula[20], tiempo;
    float sueldo_anual, sueldo_mensual, bono;

    printf("Nombre: ");
    scanf("%s", &nombre);
    printf("Apellido: ");
    scanf("%s", &apellido);
    printf("Cedula: ");
    scanf("%d", &cedula);
    printf("Tiempo (expresadon en Años): ");
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

    printf("\nNombre: %s\n Apellido:  %s\n Cédula: %d\n", nombre,apellido,cedula);
    printf("Sueldo mensual: %.2f Bs\nSueldo anual: %.2f Bs\nTiempo de servicio: %d años\nBono: %.2f Bs\n", sueldo_anual);


    return 0 ;
    }
