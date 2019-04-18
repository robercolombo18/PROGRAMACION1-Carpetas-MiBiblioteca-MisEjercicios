#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pares;
    int i;

    for(i=1; i<101; i++)
    {
        if(i%2==0)
        {
            pares++;
        }
    }

    printf("Pares: %d", pares);



    return 0;
}
