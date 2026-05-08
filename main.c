#include <stdio.h>
#include "restar.h"
#include "sumar.h"
int main(int argc, char const *argv[])
{
    int a, b;

    printf("Ingrese el 1er numero: ");
    scanf("%d", &a);

    printf("Ingrese el 2do numero: ");
    scanf("%d", &b);

    printf("La suma es: %d", sumar(a, b));
 printf("La resta es: %d", sumar(a, b));

    return 0;
}

