//Mostrar la cantidad de caracteres especiales que hay en una cadena de carácter recibida por entrada del 
//usuario

#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int contador = 0;

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    for(int i = 0; cadena[i] != '\0'; i++) {
        if(!isalnum((unsigned char)cadena[i]) && !isspace((unsigned char)cadena[i])) {
            contador++;
        }
    }

    printf("La cantidad de caracteres especiales en la cadena es: %d\n", contador);

    return 0;
}




/*Este programa utiliza las funciones isalnum y isspace de la biblioteca ctype.h 
para verificar si un carácter es alfanumérico o un espacio en blanco, respectivamente. 
Si el carácter no es ni alfanumérico ni un espacio en blanco, se considera un carácter especial 
y se incrementa el contador. Finalmente, se imprime la cantidad de caracteres especiales encontrados.*/