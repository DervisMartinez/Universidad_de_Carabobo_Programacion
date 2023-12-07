#include <stdio.h>

int main(){
    
  int respuesta,num1,num2,cierre,operacion;
  
  
  do{
    printf("¿Que desea realizar?: 1) suma, 2)multiplicacion ,3)salir\n");
    
    scanf("%d",&respuesta);
    
    
    printf("primer valor:");
    scanf("%d",&num1);
    
    printf("segundo valor:");
    scanf("%d",&num2);
    
    switch(respuesta){
        
       case 1://Suma
       operacion = num1 + num2;
       printf("la suma es %d :\n",operacion);
       break;
       
       case 2:  //Multiplicacion
       operacion = num1 * num2;
       printf("la multiplicacion es %d :\n",operacion);
       break;
       
       
        
        }
    
    } while(respuesta == 3);
    
    
return 0;    
}