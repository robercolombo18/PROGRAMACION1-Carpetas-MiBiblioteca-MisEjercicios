#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char letra;
    int a = 0;
    int e = 0;
    int contI = 0;
    int o = 0;
    int u = 0;
    int i;

    for(i = 0; i < 20; i++)
    {
        printf("Ingrese una letra (a, e, i, o, u): \n");
        scanf("%c", &letra);
        fflush(stdin);

        switch(letra)
        {
        case 'a':
            a++;
        break;
        case 'e':
            e++;
        break;
        case 'i':
            contI++;
        break;
        case 'o':
            o++;
        break;
        case 'u':
            u++;
        break;
        default:
            printf("No ha ingresado una letra vocal, reingrese. \n");
        break;
        }


    }

    system("cls");
    printf("Se ingresaron 20 caracteres.\n\n");
    printf("Veces que se ingreso a: %d \n", a);
    printf("Veces que se ingreso e: %d \n", e);
    printf("Veces que se ingreso i: %d \n", contI);
    printf("Veces que se ingreso o: %d \n", o);
    printf("Veces que se ingreso u: %d \n", u);



    return 0;
}
