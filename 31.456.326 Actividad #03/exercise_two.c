#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    char region[10];
} Pais;

Pais paises[100];
int numPaises = 0;

void leerArchivo(char *nombreArchivo, char *region) {
    FILE *file = fopen(nombreArchivo, "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo %s\n", nombreArchivo);
        return;
    }

    while (fscanf(file, "%s\n", paises[numPaises].nombre) != EOF) {
        strcpy(paises[numPaises].region, region);
        numPaises++;
    }

    fclose(file);
}

int comparar(const void *a, const void *b) {
    return strcmp(((Pais *)a)->nombre, ((Pais *)b)->nombre);
}

void generarArchivo() {
    qsort(paises, numPaises, sizeof(Pais), comparar);

    FILE *file = fopen("america.txt", "w");
    if (file == NULL) {
        printf("No se pudo abrir el archivo america.txt\n");
        return;
    }

    for (int i = 0; i < numPaises; i++) {
        fprintf(file, "%s %s\n", paises[i].nombre, paises[i].region);
    }

    fclose(file);
}

int main() {
    leerArchivo("norte.txt", "norte");
    leerArchivo("sur.txt", "sur");
    leerArchivo("centro.txt", "centro");

    generarArchivo();

    return 0;
}
