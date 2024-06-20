/*Dervis Martinez v-3156326 Programacion 1 */
#include <stdio.h>


int asignarMesas(int mesasDisponibles, int grupos[], int numGrupos) {
    // Caso base: no hay más grupos o no hay mesas disponibles
    if (numGrupos == 0 || mesasDisponibles == 0) {
        return 0;
    }

    // Si el tamaño del grupo actual es menor o igual a la capacidad de la mesa
    if (grupos[numGrupos - 1] <= 4) {
        
        int asignado = 1 + asignarMesas(mesasDisponibles - 1, grupos, numGrupos - 1);
        
        int noAsignado = asignarMesas(mesasDisponibles, grupos, numGrupos - 1);
     
        return (asignado > noAsignado) ? asignado : noAsignado;
    } else {
       
        return asignarMesas(mesasDisponibles, grupos, numGrupos - 1);
    }
}

int main() {
    int n = 6; // Número de mesas disponibles
    int grupos[] = {2, 3, 4, 1, 5}; // Tamaños de los grupos de clientes
    int numGrupos = sizeof(grupos) / sizeof(grupos[0]);

    int maxGruposSatisfechos = asignarMesas(n, grupos, numGrupos);
    printf("Número máximo de grupos satisfechos: %d\n", maxGruposSatisfechos);

    return 0;
}
