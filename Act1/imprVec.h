#ifndef __IMPRVEC_H
#define __IMPRVEC_H

#include <stdlib.h>
/**
 * @brief Imprime cualquier tipo de array
 * @param base Puntero al primer elemento del array a imprimir.
 * @param nitems Cantidad de elementos del array (apuntado por base).
 * @param size Tamaño en bytes de cada elemento del array.
 * @param prt Función que imprime un elemento del array.
 */
void print(void *base, size_t nitems, size_t size, int (*prt)(const void *));

/**
 * @brief Imprime datos tipo entero
 * @param vec Direccion del elemento a imprimir
 * @return Valor sin uso, 0
 */
int printInt(const void *vec);

/**
 * @brief Imprime datos tipo flotante
 * @param vec Direccion del elemento a imprimir
 * @return Valor sin uso, 0
 */
int printFloat(const void *vec);

/**
 * @brief Imprime datos tipo matriz de char
 * @param vec Direccion del elemento a imprimir
 * @return Valor sin uso, 0
 */
int printMat(const void *vec);

/**
 * @brief Imprime datos tipo char*
 * @param vec Direccion del elemento a imprimir
 * @return Valor sin uso, 0
 */
int printString(const void *vec);

#endif