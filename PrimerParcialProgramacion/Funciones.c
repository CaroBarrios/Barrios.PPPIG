#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int ordenarNotebooks(Notebook* list,int len)
{
	int respuesta = -1;
	Notebook buffer;
	int auxiliarCmp;

	if(list != NULL && len > 0)
	{
		for(int i=0;i<len-1;i++)
		{
			auxiliarCmp = strncmp(list[i].marca,list[i+1].marca,MARCA_LEN);
			if(	 auxiliarCmp > 0 ||
				(auxiliarCmp == 0 && list[i].precio < list[i+1].precio) )
			{
				buffer = list[i];
				list[i] = list[i+1];
				list[i+1]= buffer;
				respuesta = 0;
			}
		}

		}

    return respuesta;
}

int printNotebooks(Notebook* list, int length)
{
    int answer = -1;

	if(list != NULL && length > 0)
	{
		answer = 0;
		printf ("\n******Notebooks******\n\n");
        printf ("ID    Procesador       Marca       Precio    \n\n");
		for(int i=0;i<length;i++)
		{

            Notebook_print(&list[i]);
		}
	}
	return answer;
}

int Notebook_print(Notebook* pElement)
{
	int answer = -1;

	if(pElement != NULL)
	{
		answer = 0;

		printf ("%d     %s        %s        %d\n\n", pElement->id, pElement->procesador, pElement->marca, pElement->precio);
	}
	return answer;
}
