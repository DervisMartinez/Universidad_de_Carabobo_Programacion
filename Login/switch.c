#include <stdio.h>

int main(){

    char n ;

    printf("Escoja un numero del intervalo [5,10):");
    scanf("%c", &n);

    switch (n)
    {
    case 5:
        printf("Uno");
        break;
    case 6 :
    printf ("Dos");
        break; 
    case 7 :
    printf ("tres");
        break;
    case 8 :
    printf ("cuatro");
        break;
     case 9 :
    printf ("cinco");
        break;   

    case 10 :
    printf ("Seis");
        break;

    default:
    printf("el numero esogido no se encuetra en el intervalo ");
        break;
    }




}   
