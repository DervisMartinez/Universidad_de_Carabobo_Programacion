#include <stdio.h>
#include <string.h>

void new_archive(int opcion);
int next(int opcion);

int next(int opcion){
    int continuar;
    
    printf("¿Desea continuar?\n (1) Si \n (2) No\n");
    scanf("%d",&continuar);
       

    switch(continuar){
        case 1 : // SI
        continuar = opcion ;
        break;
        case 2 : // NO
        printf("el programa ha finalizado");
        break;
    };

  //  return continuar;
};

void new_archive(int opcion ){
    FILE *herram ;
    FILE *temp;
    char herramienta[60];
    char tool_to_delete[60];
    int cant;
    float price;

    herram = fopen("./herramientas.txt","a+");
    if(herram == NULL){
        perror("el archivo no existe");
        return;
    };
   
    if(opcion == 1){
       printf("indique la herramienta a añadir:\n");
       scanf("%s",herramienta);
       printf("Indique la cantidad habida:\n");
       scanf("%d",&cant);
       printf("indique el precio de la herramienta :\n");
       scanf("%f",&price);
       fprintf(herram,"%s  %d  %f\n",herramienta,cant,price);
       printf("Se ha añadido una nueva herramienta\n");
       
       
       }
        
        if(opcion == 2){
           printf("Indique la herramienta a eliminar:\n");
            scanf("%s",tool_to_delete);
            temp = fopen("./temp.txt","w");
            while(fscanf(herram,"%s %d %f",herramienta,&cant,&price)!=EOF)
            {
                if(strcmp(herramienta, tool_to_delete)!=0)
                {
                    fprintf(temp,"%s  %d  %f\n",herramienta,cant,price);
                }
            }
            fclose(herram);
            fclose(temp);
            remove("./herramientas.txt");
            rename("./temp.txt","./herramientas.txt");
            printf("Se ha eliminado la herramienta\n");
            
        }
        if(opcion == 3){
            fclose(herram);
        }  

};

int main(){

    int opcion;


    do{ 

        printf("Que desea realizar :\n 1) Añadir una nueva herramienta \n 2)Eliminar una herramienta \n 3)Cerrar el Archivo\n");
        scanf("%d",&opcion);

        switch(opcion){

            case 1 : //Añadir una nueva herramienta
            new_archive(opcion);
            break;

            case 2 : // Eliminar una herramienta
            new_archive(opcion);
            break;

            case 3 : // Finalizar el programa
            new_archive(opcion);
            break;
        }
        
        opcion = next(opcion);
        printf("%d",opcion);

    }while(opcion <= 3);


    return 0;
};
