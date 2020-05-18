#ifndef Funciones_H_INCLUDED
#define Funciones_H_INCLUDED

#define PROCESADOR_LEN 20
#define MARCA_LEN 20

typedef struct
{
    int id;
    char procesador [PROCESADOR_LEN];
    char marca [MARCA_LEN];
    int precio;

}Notebook;

int aplicarDescuento(int precioProducto);
int contarCaracteres(char* list, char caracter);
int ordenarNotebooks(Notebook* list,int len);
int Notebook_print(Notebook* pElement);
int printNotebooks(Notebook* list, int length);

#endif // FUNCIONES_H_INCLUDED
