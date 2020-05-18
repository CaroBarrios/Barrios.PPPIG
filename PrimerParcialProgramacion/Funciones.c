#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int aplicarDescuento(int precioProducto)
{
    int descuento;
    int total;
    int porcentaje = 5;

    descuento = (precioProducto * porcentaje) / 100;

    total = precioProducto - descuento;

    return total;
}

int contarCaracteres(char* list, char caracter)
{
	int contadorCaracteres = 0;
	for(int i = 0; list[i] != '\0'; i++){
		if(list[i] == caracter){
			contadorCaracteres++;
		}
	}
	return contadorCaracteres;
}
