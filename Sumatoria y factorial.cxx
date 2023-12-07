#include <stdio.h>
#include <math.h>

// Función para calcular el factorial de un número
int factorial(int n) {
  int f = 1;
  for (int i = 1; i <= n; i++) {
    f = f * i;
  }
  return f;
}

// Función para calcular la suma de la expresión
double suma(int n) {
  double s = 0;
  for (int k = 1; k <= n; k++) {
    s = s + (double) factorial(2*k-1) / pow(k, 3);
  }
  return s;
}

int main() {
  int n;
  printf("Introduzca un número entero positivo distinto de cero: ");
  scanf("%d", &n);
  if (n > 0) {
    printf("El resultado de la expresión es: %.2f\n", suma(n));
  } else {
    printf("El número debe ser positivo y distinto de cero.\n");
  }
  return 0;
}
