#include "menu.h"
#include "funciones.h"

int IngresarEntero(char*mensaje,char* mensajeError){

	int numero;

	do{
		printf("%s",mensaje);
		scanf("%d",&numero);

		if(numero > 0 ){

			break;

		}
		printf("%s",mensajeError);

	}while(numero <= 0);

	return numero;
}

float IngresarFlotante(char*mensaje, char* mensajeError){


	float numero;

	do{
		printf("%s",mensaje);
		scanf("%f",&numero);

		if(numero > 0 ){

			break;
		}
		printf("%s",mensajeError);

	}while(numero <= 0);

	return numero;
}

void MensajeDeOpciones (int flag1, int flag2, int distancia, float aerolineas, float latam){

	printf("\n");
	if(flag1 == 1){

		printf("- 1) Ingresar kilometros:\n");

	}
	else{

		printf("- 1) Ingresar Kilometros: %dKm\n",distancia);
	}

	if(flag2 == 1){

		printf("- 2) Precio de aerolea y precio Latam\n");

	}
	else{

		printf("- 2) Precio de aerolea y precio Latam\n");
		printf("\t-Precio de vuelo aerolea: %.2f$\n",aerolineas);
		printf("\t-Precio de vuelo latam: %.2f$\n",latam);

	}

	printf("- 3) calcular Costos.\n"
			"- 4) Mostrar precios.\n"
			"- 5) Carga Forzada.\n"
			"- 6) cerrar.\n");




}
