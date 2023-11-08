#include <stdio.h>

// Definición de las constantes
#define F1_HOMBRE 2.7
#define F2_HOMBRE 47.75
#define F1_MUJER 2.25
#define F2_MUJER 45.0

// Prototipos de las funciones
float calcularIMC(float peso, float estatura);
float calcularPesoIdeal(float estatura, char sexo);

int main() {
    FILE *entrada = fopen("peso.txt", "r");
    FILE *salida = fopen("salida.txt", "w");
    char sexo;
    float estatura, peso1, peso2, peso3, peso4, peso5;
    float imc, pesoIdeal, pesoPromedio;

    // Leer los datos de cada persona
    while (fscanf(entrada, "%c %f %f %f %f %f %f\n", &sexo, &estatura, &peso1, &peso2, &peso3, &peso4, &peso5) != EOF) {
        // Calcular el peso promedio
        pesoPromedio = (peso1 + peso2 + peso3 + peso4 + peso5) / 5;

        // Calcular el IMC y el peso ideal
        imc = calcularIMC(pesoPromedio, estatura);
        pesoIdeal = calcularPesoIdeal(estatura, sexo);

        // Guardar los resultados en el archivo de salida
        fprintf(salida, "IMC: %.2f, Peso Ideal: %.2f\n", imc, pesoIdeal);
    };

    // Cerrar los archivos
    fclose(entrada);
    fclose(salida);

    return 0;
};

// Implementación de las funciones
float calcularIMC(float peso, float estatura) {
    return (peso / (estatura * estatura)) * 10000;
}

float calcularPesoIdeal(float estatura, char sexo) {
    if (sexo == 'H') {
        return ((estatura - 152.4) / 2.54) * F1_HOMBRE + F2_HOMBRE;
    } else {
        return ((estatura - 152.4) / 2.54) * F1_MUJER + F2_MUJER;
    };
}
