#include <stdio.h>
#include <stdlib.h>

void imprimir_estado(char id[9], char nombre[50], int saldo_inicial, int transaccion) {
    int saldo_final = saldo_inicial + transaccion;
    printf("%s %s %d %d ", id, nombre, saldo_inicial, transaccion);
    if (saldo_final < 0) {
        printf("%d Deudor\n", saldo_final);
    } else {
        printf("%d Acreedor\n", saldo_final);
    }
}

void procesar_transacciones() {
    FILE *transacciones_globales = fopen("transacciones.txt", "r");
    if (transacciones_globales == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    char id[9];
    char nombre[50];
    int saldo_inicial;
    int transaccion;
    while (fscanf(transacciones_globales, "%s %s %d %d\n", id, nombre, &saldo_inicial, &transaccion) != EOF) {
        imprimir_estado(id, nombre, saldo_inicial, transaccion);
    }

    fclose(transacciones_globales);
}

int main() {
    procesar_transacciones();
    return 0;
}
