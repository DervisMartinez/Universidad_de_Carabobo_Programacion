#include <stdio.h>
#include <stdlib.h>

/*Manejo de archivos en lenguaje C*/
/*Lectura de Archivos*/
/*flujo de datos FILE */

/*PROGRAMA --> CANAL --> DISCO_DURO -- Escritura*/
/*PROGRAMA <-- CANAL(FLUJO DE DATOS) <-- DISCO_DURO --  Lectura*/

int main(){
    FILE * flujo = fopen("datos.txt","rb");

    if(flujo == NULL){
        perror("error en la apertura del Archivo");
        return 1 ;
    };

    //char caracter ; // byte 
    /*int numero ;
    char cadena[10];

    while(feof(flujo) == 0){
       // caracter = fgetc(flujo);
       fscanf(flujo,"%d%s",&numero,&cadena);// fscanf obtener informsacion de acuerdo al tipo que tiene el archivo 
       numero = numero * 10;
        printf("%d%s\n",numero,cadena);

    };*/

    //almacenarlo en un arreglo de caracteres 
    fseek(flujo,0,SEEK_END); 
    int num_elementos = ftell(flujo);
    rewind(flujo);

    char * cadena = (char *) calloc(sizeof(char),num_elementos);
    if (cadena == NULL){
        perror("Error en Reserva de Mememoria");
        return 2;
    }

    int num_elementos_leidos = fread(cadena ,sizeof(char),num_elementos,flujo);
    if(num_elementos_leidos != num_elementos){
        perror("errror leyendo el archivo");
        return 3 ;
    }
    printf("%s",cadena);

    free(cadena);
    fclose(flujo);

    printf("\n\n Se ha leido el archivo Correctamente ...");

    return 0 ;

}

// fseek : mover determindado flujo de datos y recibe cuantta posiciones va mover y desde donde va empezar a moverlo
// fscanf obtener informacion de acuerdo al tipo que tiene el archivo
//ftell : preguntar donde se encuentra el flujo de datos 
// rewind : mover al flujo al inicio del archivo 
//calloc : arreglo de caracteres dinamicos recibe el tamañoe bytes de cada elemento del arreglo y cuanto elementos quiero reservar
//fread : retorna el numero de elementos leidos
//free : libero la memoria 