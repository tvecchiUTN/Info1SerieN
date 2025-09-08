#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include "bsrch.h"

void *my_bsearch(const void *key, const void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *))
{
    char *puntero_base = (char*)base;

    for(size_t i = 0; i < nitems; i++)
    {
        void *puntero_elemento = puntero_base + (i * size);

        if(!compar(key, puntero_elemento))
        {
            return puntero_elemento;
        }
    }

    return NULL;
}

int cmpInt(const void *key, const void *base)
{
    const int *iKey = (const int*)key;
    const int *iBase = (const int*)base;
    if((*iKey) == (*iBase))
    {
        return 0;
    }
    return 1;
}

int cmpFloat(const void *key, const void *base)
{
    const float *iKey = (const float*)key;
    const float *iBase = (const float*)base;
    if((*iKey) == (*iBase))
    {
        return 0;
    }
    return 1;
}