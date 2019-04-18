#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    float radio;
    float longitud;
    float area;

    printf("Ingrese el radio de la circunferencia: \n");
    scanf("%f", &radio);

    longitud = 2 * PI * radio;
    area = PI * (radio * radio);

    printf("\nLa longitud de la circunferencia es: %.2f\n", longitud);
    printf("\nEl area de la circunferencia es: %.2f\n", area);


    return 0;
}
