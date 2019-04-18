#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1;
    int numero2;
    int resta;

    printf("Ingrese el primer numero: \n\n");
    scanf("%d", &numero1);

    system("cls");

    printf("Ingrese el segundo numero: \n\n");
    scanf("%d", &numero2);

    resta = numero1 - numero2;

    printf("La resta es %d \n\n", resta);

    if(resta >= 0)
    {
        printf("(RESULTADO POSITIVO)\n\n");
    }
    else
    {
        printf("RESULTADO NEGATIVO.\n\n");
    }


    return 0;
}
