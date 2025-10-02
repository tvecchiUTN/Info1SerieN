#include <stdio.h>
#include "imprVec.h"

#define TAM 2

int main(void)
{
    int vecPrueba[TAM];
    for(int i = 0; i < TAM; i++)
    {
        vecPrueba[i] = rand() % TAM;
    }

    print(vecPrueba, TAM, sizeof(int), printInt);
}