/*Dervis  Martinez v-31456326  PROGRAMACION 1*/

//bibliotecas
#include <stdio.h>
#include <string.h>

void merge(char arr[][50], int left, int mid, int right, int *swaps) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    char left_half[n1][50], right_half[n2][50];

    for (i = 0; i < n1; i++)
        strcpy(left_half[i], arr[left + i]);
    for (j = 0; j < n2; j++)
        strcpy(right_half[j], arr[mid + 1 + j]);

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (strcmp(left_half[i], right_half[j]) <= 0) {
            strcpy(arr[k], left_half[i]);
            i++;
        } else {
            strcpy(arr[k], right_half[j]);
            j++;
            (*swaps) += n1 - i;
        }
        k++;
    }

    while (i < n1) {
        strcpy(arr[k], left_half[i]);
        i++;
        k++;
    }

    while (j < n2) {
        strcpy(arr[k], right_half[j]);
        j++;
        k++;
    }
}


void merge_sort(char arr[][50], int left, int right, int *swaps) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort(arr, left, mid, swaps);
        merge_sort(arr, mid + 1, right, swaps);
        merge(arr, left, mid, right, swaps);
    }
}
//funcion principal
int main() {
    char libros[][50] = {"Zoo", "Antología", "Bibliografia", "Científica", "Drama"};
    int n = sizeof(libros) / sizeof(libros[0]);
    int swaps = 0;

    merge_sort(libros, 0, n - 1, &swaps);

    printf(" los Libros ordenados:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", libros[i]);

    printf("Número de operaciones de intercambio: %d\n", swaps);

    return 0;
}
