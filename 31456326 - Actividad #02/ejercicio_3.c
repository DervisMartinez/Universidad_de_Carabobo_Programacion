#include <stdio.h>
#include <math.h>

int main(){

 double suma ;
 int factorial , n;

 printf("Introduzca un numero positivo distinto de cero :\n");
 scanf("%d",&n);

 if(n > 0){

    factorial = 1 ;
    for(int i = 1 ; i <= n ; i++){

        factorial = factorial * i ;
    };

    suma = 0 ;
    for(int k = 1 ; k <=n ; k++){
        suma = suma + (double)factorial /pow(k,3);  
          };

          printf("el resultado de la expresion es : %2f\n",suma);
 }else{
    printf("el numero debe ser positivo y distinto de cero \n");
 }

    return 0 ; 
}
