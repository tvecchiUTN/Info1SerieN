#include <stdio.h>
#include "imprVec.h"

void print(void *base, size_t nitems, size_t size, int (*prt)(const void *))
{

    size_t i;
    for(i = 0; i < nitems; i++)
    {
        prt();
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