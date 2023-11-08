#include<stdio.h>

int main()
{
	FILE *notas_estudiantes;
	FILE *notasfinales_est;
	int i;

	char sec[20];
	int nro_sec = 0;
	int nro = 0;

	char nombre[20], apellido[20];
	float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0;

	float promedio = 0, total = 0;

	notas_estudiantes = fopen("datos.txt", "r");
	notasfinales_est = fopen("salida.txt", "w");

	if(notas_estudiantes == NULL || notasfinales_est == NULL){
		printf("error");	
		return 0;
	}
	else{
	  while (!feof(notas_estudiantes)){
	  	//fgets(sec, 20, notas_estudiantes);
	  	fscanf(notas_estudiantes, "%s %i", sec, &nro_sec);
	  	fscanf(notas_estudiantes, "%i", &nro);
	  	
	  	
	  	fprintf(notasfinales_est, "%s %i\n", sec, nro_sec);
	  	promedio = 0;
	  	for(i = 0; i < nro; i++){
	  		total = 0;	
			fscanf(notas_estudiantes, "%s %s %f %f %f %f", nombre, apellido, &nota1, &nota2, &nota3, &nota4);
			total = (nota1 + nota2 + nota3 + nota4) / 4;
			promedio += total;

		  	fprintf(notasfinales_est, "%s %s %.2f\n", nombre, apellido, total);
	  	}

	  	promedio = promedio / nro;
	  	fprintf(notasfinales_est, "Promedio de la seccion %.2f\n", promedio);

	  }
	}

	fclose(notas_estudiantes);
	fclose(notasfinales_est);

	printf("Proceso terminado\n");
	return 0;
}