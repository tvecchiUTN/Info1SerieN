#include <stdio.h>
#include "imprVec.h"

int prueba(const void *vec)
{
    if( (*((int*)vec) % 2) == 1 )
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    int vecPrueba[] = {10, 11, 12, 13, 13};

    print(vecPrueba, 5, sizeof(int), printInt, NULL);
}