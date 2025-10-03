#include <stdio.h>
#include <stdlib.h>
#include "bsrch.h"

#define SIZEARR 20

int mayorIVA(const void* base)
{
    const int *iBase = (const int*)base;

    if((*iBase) > 21)
    {
        return 1;
    }

    return 0;
}

#define SZ 100

int main(void)
{
    int vec[SZ];

    int *seEncontro = NULL;

    int hhh = 50;

    for(int i = 0; i < SZ; i++)
    {
        vec[i] = i;
    }
    
    seEncontro = my_bsearchMod(&hhh, vec, SZ, sizeof(int), cmpInt, mayorIVA);

    if(seEncontro)
    {
        printf("%d\n", *seEncontro);
    }else{printf("Numero no encontrado\n");}
}