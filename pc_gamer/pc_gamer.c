#include <stdio.h>

int main(){

    int almacenamiento, ram, presupuesto , costo_total; // 
    int dia_semana; // dia de la semana
    int cuenta_papa ; // Dinero en la cuenta del padre
    int respuesta , memoria; // para el calculo 
    int suma_digitos_menores_5 = 0, temp;
    char tarjeta_grafica;

        // solictar el almacenamieto de los juegos 

        printf("Desea calcular el almacenmiento 1 si 2 no  \n");
        scanf("%d",&respuesta);
        
        almacenamiento = 0 ;
        while(respuesta != 2){

            if(respuesta == 1){
                printf("ingrese los valores en GB a calcular por separado :\n");
                scanf("%d",&memoria);
                almacenamiento = almacenamiento + memoria ;

            }else{
                printf("no haz ingresado un valor valido");
            }

            printf("Desea calcular el almacenmiento 1 si 2 no  \n");
            scanf("%d",&respuesta);

        }
    
            almacenamiento = almacenamiento * 5 ;
            printf("el almacenamieto minimo requerido es : %d\n",almacenamiento);

            printf("Ingrese la cuenta del padre : \n");
            scanf("%d",&cuenta_papa);
            temp = cuenta_papa;
            while(temp >0){
                if(temp % 10 < 5 ){
                    suma_digitos_menores_5 = suma_digitos_menores_5 + temp % 10;

                };
                temp = temp / 10 ;
            }
            int valor_tarjeta_regalo = cuenta_papa * suma_digitos_menores_5 ;

            // Agregar el valor de la tarjeta de regalo al presupuesto del papá
            presupuesto = (cuenta_papa + valor_tarjeta_regalo) / 2 ;


            //presupueto memoria RAM
            
            if(presupuesto >= 273){
                printf("Te conviene la RAM de 32 gb ");

            }else{
                printf("te coviene la RAM de 16 gb");
            };

            // calcular la tarjeta graficar que puede comprar
            if(presupuesto >= 850 ){
                printf("NVIDIA GeForce RTX 4070 Ti");
                costo_total = 850 ;
            }else if(presupuesto >= 650 && presupuesto <= 850){
                printf("NVIDIA GeForce RTX 4070");
                costo_total = 600 ;
            }else{
                printf("AMD Radeon RX 7700 XT");
                costo_total = 400;
            };

    return 0; 
}
