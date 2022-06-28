#include <stdio.h>

/// @fn float CalcularPrecioUnitario(int, int)
/// @brief calcula el coste del precio del vuelo por los kilometros
///
/// @param int: la cantidad de kilometros
/// @param int: el preico del vulo (latam o aerolinea)
/// @return float: el resultado del precio de vuelo y de los kilomtros
float CalcularPrecioUnitario(int,int);

/// @fn float CalcularDescuento(int)
/// @brief calcula el descuento del 10% del precio del vuelo que recibe por parametro
///
/// @param int: precio ingresado
/// @return float: descuento calculado
float CalcularDescuento(int);

/// @fn float CalcularInteres(int)
/// @brief calcula el interes del %25 del precio del vuelo que recibe por parametro
///
/// @param int: precio de vuelo
/// @return float: interes calculado
float CalcularInteres(int);

/// @fn float CalcularBitcoin(int)
/// @brief calcula el precio del vuelo en el valor del bitcoin
///
/// @param  int: precio del vuelo
/// @return float: precio del vuelo en bitcon
float CalcularBitcoin(int);

/// @fn float DiferenciarPrecios(float, float)
/// @brief calcula la diferencia entre los precios de los vuelos
///
/// @param float: precio del vuelo1 por kilometros
/// @param float: precio del vuelo2 por kilometros
/// @return float diferencia de vuelo de ambos vuelos
float DiferenciarPrecios(float,float);

/// @fn void MostrarRespuestas(char*, float, int, float, float, float)
/// @brief muestra un mensaje informando los resultados de la mayoria de las opreciones anteriores que recibe por parametros
///
/// @param char* nombre del vuelo
/// @param float precio del vuelo por kilomtros
/// @param int precio del vuelo
/// @param float valor del descuento
/// @param float valor del interes
/// @param float valor del prcio de vuelo en bitcoin
void MostrarRespuestas(char*, float, float, float,float,float);

/// @fn void ForzarCarga(int, int, int)
/// @brief realiza y muestra todas las opreciones metematicas de los valors ingresados por paramtros
///
/// @param int kilometros
/// @param int precio de vuelo1
/// @param int precio de vuelo2
void ForzarCarga(int, int, int);
