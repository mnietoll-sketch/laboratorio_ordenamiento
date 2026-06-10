#ifndef SORT_H
#define SORT_H

typedef int (*Comparator)(const void *, const void *);

void insertionSort(void *, int, int, Comparator);

void swapBytes(void *, void *, int);

#endif
