#include <stdio.h>
int main(){
    int cont,x,i,n,dig,aux,pot,acum;

    //lee un numero entero positivo
    printf("ingresa un numero entero positivo:\n");
    scanf("%d",&n);

    //inicializan variables
    cont=0;
    dig=0;
    acum=0;
    pot=1;
    aux=n;
    
    //calcula la cantidad de digitos
    while(aux!=0){
        cont+=1;
        aux=aux/10;
    }


    aux=n;

    //separa digitos y los eleva a la cantidad de digitos y guarda el valor
    for(x=1;x<=cont;x++){
        dig=aux%10;
        aux=aux/10;
        for(i=1;i<=cont;i++){
            pot*=dig;
        }
        acum+=pot;
        pot=1;
    }

    //confirma si es amstrong o no
    if(acum==n){
        printf("el numero %d es amstrong por que sus digitos suman %d\n",n,acum);
    }else{
        printf("el numero %d no es amstrong por que sus digitos suman %d\n",aux,acum);
    }



return 0;
}