#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int cuadrado;

    printf("Ingrese un numero: \n");
    scanf("%d", &numero1);

    while(numero1 < 0)
    {
    printf("\nERROR, el numero debe ser mayor que cero, reingrese un numero: \n");
    scanf("%d", &numero1);

    }

    cuadrado = numero1 * numero1;

    printf("\n\nEl cuadrado de %d es: %d \n\n", numero1, cuadrado);



    return 0;
}
