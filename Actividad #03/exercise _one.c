#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    char apellido[50];
    char telefono[15];
    int edad;
    float peso;
    float altura;
} Persona;

Persona personas[20];
int numPersonas = 0;

void leerArchivo() {
    FILE *file = fopen("persona.txt", "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo persona.txt\n");
        return;
    }

    while (fscanf(file, "%s %s %s %d %f %f\n", personas[numPersonas].nombre, personas[numPersonas].apellido, personas[numPersonas].telefono, &personas[numPersonas].edad, &personas[numPersonas].peso, &personas[numPersonas].altura) != EOF) {
        numPersonas++;
    }

    fclose(file);
}

void mostrarNombres() {
    for (int i = 0; i < numPersonas; i++) {
        printf("%s\n", personas[i].nombre);
    }
}

void mostrarPorEdad(int edad) {
    for (int i = 0; i < numPersonas; i++) {
        if (personas[i].edad == edad) {
            printf("%s %s\n", personas[i].nombre, personas[i].apellido);
        }
    }
}

void mostrarPorInicial(char inicial) {
    for (int i = 0; i < numPersonas; i++) {
        if (personas[i].nombre[0] == inicial) {
            printf("%s %s\n", personas[i].nombre, personas[i].apellido);
        }
    }
}

void imprimirPromedios() {
    FILE *file = fopen("promedio.txt", "w");
    if (file == NULL) {
        printf("No se pudo abrir el archivo promedio.txt\n");
        return;
    }

    int minEdad = 200, maxEdad = 0, totalEdad = 0;
    float totalPeso = 0.0, totalAltura = 0.0;

    for (int i = 0; i < numPersonas; i++) {
        if (personas[i].edad < minEdad) minEdad = personas[i].edad;
        if (personas[i].edad > maxEdad) maxEdad = personas[i].edad;
        totalEdad += personas[i].edad;
        totalPeso += personas[i].peso;
        totalAltura += personas[i].altura;
    }

    fprintf(file, "Edad mínima: %d\n", minEdad);
    fprintf(file, "Edad máxima: %d\n", maxEdad);
    fprintf(file, "Edad promedio: %.2f\n", (float)totalEdad / numPersonas);
    fprintf(file, "Peso promedio: %.2f\n", totalPeso / numPersonas);
    fprintf(file, "Altura promedio: %.2f\n", totalAltura / numPersonas);

    for (int i = 0; i < numPersonas; i++) {
        float imc = personas[i].peso / (personas[i].altura * personas[i].altura);
        char *categoria;

        if (imc < 18.5) categoria = "bajo de peso";
        else if (imc < 25) categoria = "peso normal";
        else if (imc < 30) categoria = "sobrepeso";
        else categoria = "obesidad";

        fprintf(file, "Índice IMC de %s %s: %.2f (%s)\n", personas[i].nombre, personas[i].apellido, imc, categoria);
    }

    fclose(file);
}

int main() {
    leerArchivo();

    while (1) {
        printf("1. Mostrar la lista de todos los nombres\n");
        printf("2. Mostrar las personas de cierta edad\n");
        printf("3. Mostrar las personas cuya inicial sea la que el usuario indique\n");
        printf("4. Imprimir promedios\n");
        printf("5. Salir del programa\n");

        int opcion;
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                mostrarNombres();
                break;
            case 2:
                printf("Ingrese la edad: ");
                int edad;
                scanf("%d", &edad);
                mostrarPorEdad(edad);
                break;
            case 3:
                printf("Ingrese la inicial: ");
                char inicial;
                scanf(" %c", &inicial);  // El espacio antes de %c es para ignorar el salto de línea anterior
                mostrarPorInicial(inicial);
                break;
            case 4:
                imprimirPromedios();
                break;
            case 5:
                return 0;
        }
    }

    return 0;
}
