#include <stdio.h>
#include "imprVec.h"

#define TAM 10

int main(void)
{
    int nums[] = {1, 3, 5, 2, 5, 2, 2, 4, 6, 1};

    printProm(nums, TAM, sizeof(int), printInt, valorInt);
}