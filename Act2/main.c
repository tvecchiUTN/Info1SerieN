#include <stdio.h>
#include "imprVec.h"

int prueba(const void *vec)
{
    // Devuelve 1 si el número es impar, 0 si es par
    return ((*((int*)vec) % 2) == 1) ? 1 : 0;
}

int main(void)
{
    int vecPrueba[] = {10, 11, 12, 13, 14, 15};
    size_t total_elementos = 6;
    
    printf("=== PRUEBA SIN CONDICIÓN ===\n");
    size_t impresos = printCond(vecPrueba, total_elementos, sizeof(int), printInt, NULL);
    printf("Elementos impresos: %zu de %zu\n\n", impresos, total_elementos);
    
    printf("=== PRUEBA CON CONDICIÓN (solo impares) ===\n");
    impresos = printCond(vecPrueba, total_elementos, sizeof(int), printInt, prueba);
    printf("Elementos impresos: %zu de %zu\n", impresos, total_elementos);
    
    return 0;
}