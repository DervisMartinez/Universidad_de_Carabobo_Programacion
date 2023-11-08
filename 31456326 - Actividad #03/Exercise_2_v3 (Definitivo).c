#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen("transactions.txt", "r");
    FILE *accounts = fopen("accounts.txt", "wb");

    if (file == NULL || accounts == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        char id[10];
        char name[50];
        int initial_balance;
        int transaction;

        sscanf(line, "%s %[^0-9] %d %d\n", id, name, &initial_balance, &transaction);
        
        // Eliminar espacios finales en el nombre
        for (int i = strlen(name) - 1; i >= 0 && name[i] == ' '; --i) {
            name[i] = '\0';
        }

        int final_balance = initial_balance + transaction;
        char status[10];

        if (final_balance < 0) {
            sprintf(status, "Deudor");
        } else {
            sprintf(status, "Acreedor");
        }

        fprintf(accounts, "%s %s %d %d %d %s\n", id, name, initial_balance, transaction, final_balance, status);
    }

    fclose(file);
    fclose(accounts);

    return 0;
}

