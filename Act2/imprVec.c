#include <stdio.h>
#include "imprVec.h"

size_t printCond(void *base, size_t nitems, size_t size, int (*prt)(const void *), int (*cond)(const void *))
{
    size_t cuenta = 0;
    char *puntero_base = (char *)base;

    for(size_t i = 0; i < nitems; i++)
    {
        void *puntero_elemento = puntero_base + (i * size);
        
        // Si no hay condición O si la condición se cumple
        if(!cond || cond(puntero_elemento))
        {
            // Solo cuenta si la impresión fue exitosa
            if(!prt(puntero_elemento))
            {
                cuenta++;
            }
        }
    }

    return cuenta;
}

int printInt(const void *vec)
{
    printf("%d\n", *(int*)vec);
    return 0;
}

int printFloat(const void *vec)
{
    printf("%.2f\n", *(float*)vec);
    return 0;
}

int printMat(const void *vec)
{
    printf("%s\n", (char*)vec);
    return 0;
}

int printString(const void *vec)
{
    printf("%s", (char*)vec);
    printf("\n");
    return 0;
}