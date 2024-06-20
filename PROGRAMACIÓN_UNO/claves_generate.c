/*Dervis Martinez V-31456326 PROGRAMACION 1*/
#include <stdio.h>



//principal

char arr[100];
int i, j, n, m, l;
char c[256];  //vector
FILE *archive;

int main(){


    l=0;
archive = fopen("entrada.txt", "rb");
    if (archive == NULL){
        printf("Error al abrir el archivo entrada.txt\n");
        return 1;

    }else{
        fscanf(archive, "%d", &n);
        for(i=0; i<n; i++){
            fscanf(archive, "%s", &arr[i]);
            l++;
        }
        fscanf(archive, "%d", &m);
        for(i=0; i<m; i++){
            fscanf(archive, "%s", &c[i]);
        }
        for(i=0; i<l; i++){
            for(j=0; j<10; j++){
                printf("%c%d\n", arr[i], j);
            }

        }

        

    }
    fclose(archive);
    return 0;
}