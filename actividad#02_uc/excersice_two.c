#include <stdio.h>

double potencia(double base, int exponente) {
    double resultado = 1;
    for(int i = 0; i < exponente; i++)
        resultado *= base;
    return resultado;
}

double binomio(double a, double b, int n) {
    double res = 0;
    for(int i = 0; i <= n; i++)
        res += potencia(a, n-i) * potencia(b, i);
    return res;
}

int main() {
    FILE *entrada = fopen("data.txt", "r");
    FILE *salida = fopen("salida.txt", "w");
    double a, b, res;
    int n;

    if (entrada == NULL || salida == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    while (fscanf(entrada, "%lf %lf %d", &a, &b, &n) != EOF) {
        res = binomio(a, b, n);
        fprintf(salida, "El resultado del binomio para a=%.2lf, b=%.2lf y n=%d es %.2lf\n", a, b, n, res);
    }

    fclose(entrada);
    fclose(salida);

    return 0;
}
