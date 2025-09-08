#include <stdio.h>
#include "imprVec.h"

#define TAM 10

int main(void)
{
    char matriz[TAM][TAM] = {"Hola", "Chicos"};

    print(matriz, 3, sizeof(char*), printMat);
}