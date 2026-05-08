#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "dividir.h"

int main()
{
    int a, b, opcion;

    printf("Ingrese el 1er numero: ");
    scanf("%d", &a);

    printf("Ingrese el 2do numero: ");
    scanf("%d", &b);

    printf("\nSeleccione una opcion:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("La suma es: %d\n", sumar(a, b));
    } else if (opcion == 2) {
        printf("La resta es: %d\n", restar(a, b));
    } else if (opcion == 3) {
        printf("La multiplicacion es: %d\n", multiplicar(a, b));
    } else if (opcion == 4) {
        if (b != 0) {
            printf("La division es: %.2f\n", dividir(a, b));
            printf("No se puede dividir para cero\n");
        }
    } else {
        printf("Opcion invalida\n");
    }

    return 0;
}