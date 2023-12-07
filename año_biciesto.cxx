#include <stdio.h>

int main(){
    
   int year;
   printf("introduce un año\n") ;
   scanf("%d",&year);
   
   if( ((year % 4 == 0)&& (year % 100 != 0) )|| year % 400 == 0){
    printf("es biciesto");   
   }else{
    
    printf("no es biciesto");
    
   }

   return 0;  
    
}