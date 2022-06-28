#include <stdio.h>
#include "funciones.h"

/// @fn int IngresarEntero(char*, char*)
/// @brief pide el inngreso de un numero entero, y en caso de que el numerop sea mayor a 0 lo devuelve
///
/// @param mensaje mensaje inicial la imprimir.
/// @param mensajeError mensaje en caso de que no se este cumpliendo con la validacion de que sea mayor a 0.
/// @return retorna el valor ingresado por consola.
int IngresarEntero(char*mensaje,char* mensajeError);

///  @fn float IngresarFlotante(char*, char*)
/// @brief
///
/// @param mensaje
/// @param mensajeError
/// @return
float IngresarFlotante(char*mensaje, char* mensajeError);

/// @fn void MensajeDeOpciones(int, int, int, int, float, float)
/// @brief imprime un mensaje hardcodeado y muestra los datos que se pasan como parametro.
///
/// @param flag1 bandera que se se va a utilizar como filtros para mostrarr un dato en espesifico.
/// @param flag2 bandera que se se va a utilizar como filtros para mostrarr un dato en espesifico.
/// @param distancia valor que se va a mostrar luego de validar el flag1.
/// @param aerolineas valor que se va a mostrar luego de validar el flag2
/// @param latam valor que se va a mostrar luego de validar el flag2.
void MensajeDeOpciones (int flag1, int flag2, int distancia, float aerolineas, float latam);
