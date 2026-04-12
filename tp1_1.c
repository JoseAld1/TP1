#include <stdio.h>
#include <stdlib.h>



int main()
{
    printf("hola mundo");
    int variable = 10;
    int *puntero = &variable;

    printf("1) Contenido del puntero (valor al que apunta): %d\n", *puntero);
    printf("2) Direccion almacenada por el puntero: %p\n", puntero);
    printf("3) Direccion de memoria de la variable: %p\n", &variable);
    printf("4) Direccion de memoria del puntero: %p\n", &puntero);
    printf("5) Tamaño de la variable: %lu bytes\n", sizeof(variable));

    return 0;
}
