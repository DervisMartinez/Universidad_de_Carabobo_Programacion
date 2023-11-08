#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Introduce el número de términos: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i * (2*i + 1)/n;
    }

    printf("La suma de la serie es: %d\n", sum);

    return 0;
}
