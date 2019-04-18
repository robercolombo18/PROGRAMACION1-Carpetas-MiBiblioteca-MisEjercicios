#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero1 = 4;
    float numero2 = 5;
    float multiplicacion;
    float cuadrado;

    system("cls");

    multiplicacion = numero1 * numero2;

    printf("Los numeros cargados son 4 y 5\n\n");
    printf("La multiplicacion entre 4 y 5 es %.2f \n\n", multiplicacion);

    cuadrado = numero1 * numero1;

    printf("El cuadrado de 4 es: %f \n\n", cuadrado);


    return 0;
}
