/*
 ============================================================================
 Name        : TP_N1.c
 Author      : Moreno Pablo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "funciones.h"

int main(void) {

	setbuf(stdout,NULL);
	int opcion;
	int flag1 = 1;
	int flag2 = 1;
	int flag3 = 1;
	int distancia;
	float aerolineas;
	float latam;
	float distanciaDeAerolinea;
	float distanciaDeLatam;
	float diferenciadePrecio;
	float descuentoLatam;
	float descuentoAeroliena;
	float interesLatam;
	float interesAerolinea;
	float bitcoinLatam;
	float bitcoinAeroliena;


	do{

		MensajeDeOpciones(flag1, flag2, distancia, aerolineas, latam);

		opcion = IngresarEntero("ingrese una opcion: ", "error,ingres_e un numero mayor a 0\n");

		switch(opcion){
		case 1:
			distancia = IngresarEntero("ingrese la distancia a recorrer: ", "error. ingrese una distancia coerentel.\n");
			flag1 = 0;
			break;
		case 2:
			latam = IngresarFlotante("ingrese el precio LATAM: ", "error. ingrese un precio coerente.\n");
			aerolineas = IngresarFlotante("ingrese el precio aeorlinea: ", "error. ingrese un precio coerente.\n");
			flag2 = 0;
			break;
		case 3:
			if(flag1 == 0 || flag2 == 0){

				distanciaDeAerolinea = CalcularPrecioUnitario(aerolineas, distancia);
				distanciaDeLatam = CalcularPrecioUnitario(latam, distancia);

				descuentoAeroliena = CalcularDescuento(aerolineas);
				descuentoLatam = CalcularDescuento(latam);

				interesAerolinea = CalcularInteres(aerolineas);
				interesLatam = CalcularInteres(latam);

				bitcoinAeroliena = CalcularBitcoin(aerolineas);
				bitcoinLatam = CalcularBitcoin(latam);

				diferenciadePrecio = DiferenciarPrecios(distanciaDeAerolinea, distanciaDeLatam);

				printf("\nlos datos ingresados se calcularon de forma correcta.\n\n");

				flag3 = 0;
			}
			else{

				printf("\nprimero ingrese el la distancia de vuelo y los precios de las 2 aerolineas.\n\n");
			}

			break;
		case 4:
			if(flag3 == 0){

				MostrarRespuestas("LATAM", distanciaDeLatam, latam, descuentoLatam, interesLatam, bitcoinLatam);
				MostrarRespuestas("Aerolinea", distanciaDeAerolinea, aerolineas, descuentoAeroliena, interesAerolinea, bitcoinAeroliena);

				printf("diferencia de precio de ambas aerolineas: $%.2f",diferenciadePrecio);

			}
			else{

				printf("\ncalcule los datos primero\n\n");

			}
			break;
		case 5:

			ForzarCarga(distancia, aerolineas, latam);

			break;
		case 6:

			printf("cerrando programa ...");
			break;
		default:
			printf("\nopcion invalida\n\n");
			break;
		}

	}while(opcion != 6);

	return 0;
}
