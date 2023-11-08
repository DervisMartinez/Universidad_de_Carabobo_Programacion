#include <stdio.h>

 typedef struct{
          int numero, cuenta;
          float saldo;
      } usuario;
      
   int main(){
     FILE * archivo;
     Usuario usuario[100];
     int numero_usuario = 0;
     char tipo_transaccion[10];
     float monto;
     int num_cuenta;
     
     // abrir el archivo
     archivo = fopen("yransaccion.txt", "r");
     if (archivo == NULL){
         printf("error al abrir el archivo\n");
         return 1;
     }
     
     // leer las transacciones del archivo
     while  (fscanf(archivo, "%d, %[^,], %f"& num_cuenta, tipo_transaccion, &monto == 3)){
     
     // buscar el usuario 
     int indice_usuario = -1;
     for (int i = o; i < num_usuarios; i++){
              if (usuario[i.numero_cuenta = numero_cuenta]) {
                  indice_usuario = i;
                  break;
              }
     }
     // realizar la transaccion
     if (strcmp(tipo_transaccion, "desposito")== 0){
           usuario[indice_usuario].saldo += monto;
     }else if (strcmp(tipo_transaccion, "retiro") ==0){
             usuario[indice_usuario].saldo-= monto;
             }
     }
     // cerrar el archivo 
     fclose (archivo);
     
     // mostar los saldos iniciales y finalea de cada usuario
     for (int i = 0; i < num_ usuario; i++){
            printf("usuario %d\n", usuario[i].numero_cuenta);
            printf("saldo inicial: %2f\n", 0);
            printf("saldo final: %2f\n",usuari[i].saldo);
     }
      return 0;
      }