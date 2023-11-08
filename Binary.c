#include <stdio.h>
#define dimension 3
int main(){
    int indice,j;
    int pos_menor,alto,central,bajo;
    float menor,aux,valor;
    float arreglo[dimension];
    
/* lee el vector*/
    for(indice=0;indice<dimension;indice++){
        printf("arreglo[%i]",indice);
        scanf("%f",&arreglo[indice]);
    }

/ordenas por seleccion/
for(indice=0;indice<dimension;indice++){
    menor=arreglo[indice];
    pos_menor=indice;
    for(j=indice+1;j<dimension;j++){
        if(menor>arreglo[j]){
            menor=arreglo[j];
            pos_menor=j;
        }
    }
    aux=arreglo[indice];
    arreglo[indice]=arreglo[pos_menor];
    arreglo[pos_menor]=aux;
}
/imprime el vector/
for(indice=0;indice<dimension;indice++){
    printf("arreglo[%i]=%f\n",indice,arreglo[indice]);
}
printf("que valor desea buscar:\n");
scanf("%f",&valor);
bajo=0;
alto=dimension-1;
central=(bajo+alto)/2;

//busqueda binaria/
while(bajo<=alto&&arreglo[central]!=valor){
    if(valor<arreglo[central]){
    }else{
        bajo=central+1;
        central=(bajo+alto)/2;
    }
if(arreglo[central]==valor){
    printf("se ha encontrado el valor en la posición %i\n",central);
}else{
    printf("el valor no se encuentr\n");
}

}
return 0;
}