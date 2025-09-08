#ifndef __BSRCH_H
#define __BSRCH_H

void *my_bsearch(const void *key, const void *base, size_t nitems, size_t size, int (*compar)(const void *, const void *));

int cmpInt(const void *key, const void *base);
int cmpFloat(const void *key, const void *base);

#endif