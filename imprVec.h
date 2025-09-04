#ifndef __IMPRVEC_H
#define __IMPRVEC_H

/**
 * @brief Imprime cualquier tipo de array
 * @param base Puntero al primer elemento del array a imprimir.
 * @param nitems Cantidad de elementos del array (apuntado por base).
 * @param size Tamaño en bytes de cada elemento del array.
 * @param prt Función que imprime un elemento del array.
 */
void print(void *base, size_t nitems, size_t size, int (*prt)(const void *));

#endif