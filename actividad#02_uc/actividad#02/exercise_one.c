#include <stdio.h>
#include <string.h>


void new_archive(int opcion);
void next(int opcion);

void next(int opcion){
    int continuar;
    
    printf("¿Desea continuar?\n (1) Si \n (2) No\n");
    scanf("%d",&continuar);
       

    switch(continuar){
        case 1 : // SI
        continuar = opcion ;
        break;
        case 2 : // NO
        printf("el programa ah finalizado");
        break;
    };

//     return continuar;
    
   
};

void new_archive(int opcion ){
    FILE *herram ;
    char herramienta[60];
    int cant;
    float price;

    herram = fopen("./herramientas.txt","a+");
    if(herram == NULL){
        perror("el archivo no exite");
    };
   

    
        if(opcion == 1){

       printf("indique la herramienta a añadir:\n");
       scanf("%s",herramienta);
       printf("Indique la cantidad habida:\n");
       scanf("%d",&cant);
       printf("indique el precio de la herrameinta :\n");
       scanf("%f",&price);
       fprintf(herram,"%s  %d  %f",herramienta,cant,price);
       printf("Se a añadido una nueva herramienta\n");
       
       
       };
        
        if(opcion == 2){
            fgets(herramienta,60,herram);
            
        };
        if(opcion == 3){
            fclose(herram);
        };  

    feof(herram);
    fclose(herram);

};

int main(){

    int opcion;


    do{ 

        printf("Que desea realizar :\n 1) Añadir una nueva herramienta \n 2)Eliminar una herramienta \n 3)Cerrar el Archivo\n");
        scanf("%d",&opcion);

        switch(opcion){

            case 1 : //Añadir euna nueva herramienta
            new_archive(opcion);
            break;

            case 2 : // Eliminar una herramienta
            new_archive(opcion);
            break;

            case 3 : // FInalizar el programa
            new_archive(opcion);
            break;
        }
        new_archive(opcion);
        next(opcion);
        printf("%d",opcion);

    }while(opcion > 3);


    return 0;
};



