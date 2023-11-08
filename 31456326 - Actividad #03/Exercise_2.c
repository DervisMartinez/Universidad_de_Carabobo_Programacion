#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char id[9];
    char nombre[50];
    int saldo_inicial;
    int transaccion;
} Usuario;

void imprimir_estado(Usuario usuario) {
    int saldo_final = usuario.saldo_inicial + usuario.transaccion;
    printf("%s %s %d %d ", usuario.id, usuario.nombre, usuario.saldo_inicial, usuario.transaccion);
    if (saldo_final < 0) {
        printf("%d Deudor\n", saldo_final);
    } else {
        printf("%d Acreedor\n", saldo_final);
    }
}

void procesar_transacciones() {
    FILE *file = fopen("transacciones.txt", "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    Usuario usuario;
    while (fscanf(file, "%s %s %d %d\n", usuario.id, usuario.nombre, &usuario.saldo_inicial, &usuario.transaccion) != EOF) {
        imprimir_estado(usuario);
    }

    fclose(file);
}

int main() {
    procesar_transacciones();
    return 0;
}
