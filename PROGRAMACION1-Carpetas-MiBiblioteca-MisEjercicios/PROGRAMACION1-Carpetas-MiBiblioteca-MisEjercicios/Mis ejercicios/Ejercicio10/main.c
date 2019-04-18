#include <stdio.h>
#include <stdlib.h>

int main()
{
    int impares = 0;
    int i;

    for(i=0; i<101; i++)
    {
        if(i%2!=0)
        {
            impares++;
        }
    }





    printf("Impares: %d", impares);





    return 0;
}
