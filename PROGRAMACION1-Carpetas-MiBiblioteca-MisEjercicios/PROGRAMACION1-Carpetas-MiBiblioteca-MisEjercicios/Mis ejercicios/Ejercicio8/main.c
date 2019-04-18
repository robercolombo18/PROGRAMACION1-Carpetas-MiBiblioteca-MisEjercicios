#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int base;
    int altura;
    int superficie;

    printf("Ingrese la base del triangulo: \n");
    scanf("%d", &base);

    printf("Ingrese la altura del triangulo: \n");
    scanf("%d", &altura);

    superficie = (multiplicar(base, altura)) / 2;

    printf("\n\nLa superficie del triangulo con base %d y altura %d es de: %d cm2. \n\n", base, altura, superficie);



    return 0;
}
