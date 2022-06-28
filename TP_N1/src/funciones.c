#include "funciones.h"


float CalcularPrecioUnitario(int precio,int distancia){

	float unitario;

	unitario = precio / (float) distancia;

	return unitario;
}

float CalcularDescuento(int precio){

	float descuento;

	descuento = precio * 0.9;

	return descuento;
}

float CalcularInteres(int precio){

	float interes;

	interes = precio * 1.25;

	return interes;
}

float CalcularBitcoin(int precio){

	float bitcoin;

	bitcoin = precio / 4606954.55;

	return bitcoin;
}

float DiferenciarPrecios(float vuelo1,float vuelo2){

	float diferencia ;

	if(vuelo1 < vuelo2){

		diferencia = vuelo2 - vuelo1;

	}
	else{


		diferencia = vuelo1 -vuelo2;
	}


	return diferencia;
}

void MostrarRespuestas(char* nombreDelvuelo, float precioUnitario, float precioDeVuelo, float descuento,float interes,float bitcoin){


	printf("%s: %.2f$\n"
		   "-precio con tarjeta de debito: $%.2f\n"
		   "-precio con tarjeta de credito: $%.2f\n"
		   "-recio pagando con bitcoin: $%f\n"
		   "-precio unitario: $%.2f\n\n",nombreDelvuelo,precioDeVuelo,descuento,interes,bitcoin,precioUnitario);


}

void ForzarCarga(int distancia, int aerolinea, int latam){

	distancia = 100;
	aerolinea = 25000;
	latam = 45000;

	float distanciaDeAerolinea;
	float distanciaDeLatam;
	float descuentoAeroliena;
	float descuentoLatam;
	float interesAerolinea;
	float interesLatam;
	float bitcoinAeroliena;
	float bitcoinLatam;
	float diferenciadePrecio;

	distanciaDeAerolinea = CalcularPrecioUnitario(aerolinea, distancia);
	distanciaDeLatam = CalcularPrecioUnitario(latam, distancia);

	descuentoAeroliena = CalcularDescuento(aerolinea);
	descuentoLatam = CalcularDescuento(latam);

	interesAerolinea = CalcularInteres(aerolinea);
	interesLatam = CalcularInteres(latam);

	bitcoinAeroliena = CalcularBitcoin(aerolinea);
	bitcoinLatam = CalcularBitcoin(latam);

	diferenciadePrecio = DiferenciarPrecios(distanciaDeAerolinea, distanciaDeLatam);

	printf("\ndistancia: %d KM\n", distancia);

	MostrarRespuestas("latam", distanciaDeLatam, latam, descuentoLatam, interesLatam, bitcoinLatam);

	MostrarRespuestas("Aerolinea", distanciaDeAerolinea, aerolinea, descuentoAeroliena, interesAerolinea, bitcoinAeroliena);

	printf("la diferencia de de precio es de: $%.2f\n\n",diferenciadePrecio);

}

