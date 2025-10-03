#include <stdio.h>
#include <stdlib.h>
#include "bsrch.h"

#define SIZEARR 20

int main(void)
{
    int buscarNum = 10;

    int *seEncontro = NULL;

    int vecPrueba[SIZEARR];

    for(int i = 0; i < SIZEARR; i++)
    {
        vecPrueba[i] = i;
    }

    seEncontro = my_bsearch(&buscarNum, vecPrueba, SIZEARR, sizeof(int), cmpInt);

    if(seEncontro)
    {
        printf("%d\n", *seEncontro);
    }else{printf("Numero no encontrado\n");}
    
}