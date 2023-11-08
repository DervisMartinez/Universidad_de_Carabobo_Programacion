#include <stdio.h>

int main(){

    int year;
    printf("Introduce un año: ");
    scanf("%d", &year);

    if(((year % 4 == 0) && (year % 100 != 0))||  year % 400 == 0 ){  //Un año es Biciesto si es divisible por 400 , o bien si es divisible por 4 pero no por 100 
         printf("Es Biciesto");
    }else{
        printf("No es biciesto");
    };




    return 0 ;
}