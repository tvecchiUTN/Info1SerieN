#ifndef __QSORT_H
#define __QSORT_H

#include <stddef.h>

typedef const void* cv_t;

void my_qsort(void* base, size_t nitems, size_t size, int (*compar) (cv_t i1, cv_t i2));

int cmpInt(cv_t i1, cv_t i2);

#endif