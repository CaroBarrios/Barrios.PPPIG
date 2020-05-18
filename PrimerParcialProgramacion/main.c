#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int precioProducto = 100;
    int total;
    char caracter = {'C'};
    char list [] = {"Carlos"};

    total = aplicarDescuento(precioProducto);
    printf("El precio del producto con descuento es: %d\n", total);

    contarCaracteres(list, caracter);
    printf("La cantidad de veces que aparece la letra C es: %d\n", contarCaracteres(list, caracter));

    return 0;
}
