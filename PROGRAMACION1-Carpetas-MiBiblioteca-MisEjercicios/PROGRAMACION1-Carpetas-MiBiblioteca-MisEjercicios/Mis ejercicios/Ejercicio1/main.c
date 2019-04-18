#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float numero1;
    float numero2;
    float numero3;
    float numero4;
    float numero5;
    float suma;
    float promedio;

    printf("Ingrese el 1er numero: \n\n");
    scanf("%f", &numero1);

    printf("Ingrese el 2er numero: \n\n");
    scanf("%f", &numero2);

    printf("Ingrese el 3er numero: \n\n");
    scanf("%f", &numero3);

    printf("Ingrese el 4er numero: \n\n");
    scanf("%f", &numero4);

    printf("Ingrese el 5er numero: \n\n");
    scanf("%f", &numero5);

    suma = numero1 + numero2 + numero3 + numero4 + numero5;
    promedio = suma / 5;

    printf("\nEl promedio de todos los numeros ingresados es: %.2f \n\n", promedio);


    return 0;
}
