#include <stdio.h>

// a) Devuelve el cuadrado
int cuadrado(int num) {
    return num * num;
}

// b) Cuadrado pero con void
void cuadrado_void(int num) {
    int resultado = num * num;
    printf("Cuadrado (void) de %d es: %d\n", num, resultado);
}

// c) Muestra dirección y contenido
void mostrar(int *var) {
    printf("Contenido: %d\n", *var);
    printf("Direccion: %p\n", var);
}

// d) Intercambiar valores
void invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// e) Ordenar menor a mayor
void ordenar(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}

int main() {
    int x, y;

    printf("Ingrese dos numeros:\n");
    scanf("%d %d", &x, &y);

    // a)
    printf("Cuadrado de %d es: %d\n", x, cuadrado(x));

    // b)
    cuadrado_void(y);

    // c)
    printf("\nMostrando datos de x:\n");
    mostrar(&x);

    // d)
    printf("\nAntes de invertir: x=%d, y=%d\n", x, y);
    invertir(&x, &y);
    printf("Despues de invertir: x=%d, y=%d\n", x, y);

    // e)
    printf("\nAntes de ordenar: x=%d, y=%d\n", x, y);
    ordenar(&x, &y);
    printf("Despues de ordenar: x=%d (menor), y=%d (mayor)\n", x, y);

    return 0;
}