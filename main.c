#include <stdio.h>

int sumar(int a, int b);

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Ingrese el 1er número: ");
    scanf("%d", &a);

    printf("Ingrese el 2do número: ");
    scanf("%d", &b);

    printf("La suma es: %d", sumar(a, b));

    return 0;
}

int sumar(int a, int b)
{
    return a + b;
}