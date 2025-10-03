#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include "imprVec.h"

void printProm(void *base, size_t nitems, size_t size, int (*prt)(const void *), double (*getValue)(const void *))
{
    char *puntero_base = (char *)base;
    double suma = 0;
    for(size_t i = 0; i < nitems; i++)
    {
        void *puntero_elemento = puntero_base + (i * size);
        suma += getValue(puntero_elemento);
    }
    double promedio = (nitems > 0) ? suma / nitems : 0;
    for(size_t i = 0; i < nitems; i++)
    {
        void *puntero_elemento = puntero_base + (i * size);
        if(getValue(puntero_elemento) > promedio)
        {
            prt(puntero_elemento);
        }
    }
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

double valorInt(const void *vec)
{
    return (double)(*(int*)vec);
}