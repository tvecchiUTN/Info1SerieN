#include <stdio.h>
#include "imprVec.h"

#define TAM 3

int main(void)
{
    char *vecPrueba[TAM] = {"Hola ", "como ", "estan."};
    //for(int i = 0; i < TAM; i++) {vecPrueba[i] = rand() % TAM;}

    print(vecPrueba, TAM, sizeof(char**), printMat);
}