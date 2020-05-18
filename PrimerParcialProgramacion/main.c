#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

#define QTY_NOTEBOOK 5

int main()
{
    Notebook arrayNotebook[QTY_NOTEBOOK] = {
                                            {1000, "IE11", "Lenovo", 2000},
                                            {1001, "IE4", "Asus", 4000},
                                            {1002, "IE2", "HP", 12000},
                                            {1003, "IE4", "Asus", 5500},
                                            {1004, "IE10", "HP", 2850},
                                            };
    int precioProducto = 100;
    int total;
    char caracter = {'C'};
    char list [] = {"Carlos"};

    total = aplicarDescuento(precioProducto);
    printf("El precio del producto con descuento es: %d\n", total);

    printf("La cantidad de veces que aparece la letra C es: %d\n", contarCaracteres(list, caracter));

    ordenarNotebooks(arrayNotebook,QTY_NOTEBOOK);
    printNotebooks(arrayNotebook, QTY_NOTEBOOK);

    return 0;
}
