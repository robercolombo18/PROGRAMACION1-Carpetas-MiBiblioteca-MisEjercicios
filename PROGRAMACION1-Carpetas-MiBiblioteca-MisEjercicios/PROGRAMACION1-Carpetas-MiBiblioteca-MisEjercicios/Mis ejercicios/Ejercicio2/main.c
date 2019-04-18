#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    float numero1;
    float numero2;
    float suma;

    printf("Ingrese el 1er numero: \n");
    scanf("%f", &numero1);

    printf("\nIngrese el 2do numero: \n");
    scanf("%f", &numero2);

    suma = sumar(numero1, numero2);

    printf("\nLa suma de los numeros ingresados es: %.2f \n\n", suma);


    return 0;
}
