#include <stdio.h>
#include "qsort.h"

#define TANTO 1000000
int main()
{
    size_t arr[TANTO];
    size_t a = TANTO;
    for(size_t j = 0; j < TANTO; j++)
    {
        arr[j] = a;
        a--;
    }

    my_qsort(arr, TANTO, sizeof(size_t), cmpInt);

    for(size_t j=0; j<TANTO; j++){printf("%ld\n", arr[j]);}
}
