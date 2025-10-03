#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "qsort.h"

void my_qsort(void *base, size_t nitems, size_t size, int (*compar)(cv_t i1, cv_t i2))
{
    char *p_base = (char *)base;

    int i = 0;
    void *temp = malloc(size);

    int pasadas = 0;
    while (1)
    {
        for (i = 1; i < nitems; i++)
        {
            void *p_itemActu = p_base + (i * size);
            void *p_itemAnte = p_base + ((i - 1) * size);

            if (compar(p_itemAnte, p_itemActu))
            {
                memcpy(temp, p_itemAnte, size);
                memcpy(p_itemAnte, p_itemActu, size);
                memcpy( p_itemActu, temp, size);

                pasadas=1;
            }
        }

        if (!pasadas)
        {
            break;
        }
        pasadas = 0;
    }

    free(temp);
}

int cmpInt(cv_t i1, cv_t i2)
{
    const int *itemAnte = (const int *)i1;
    const int *itemPrin = (const int *)i2;
    return *itemAnte > *itemPrin ? 1 : 0;
}