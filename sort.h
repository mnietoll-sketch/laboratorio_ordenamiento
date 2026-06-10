#ifndef SORT_H
#define SORT_H

typedef int (*Comparator)(const void *, const void *);

void insertSorted(void *, int n, int size, void *, Comparator);

void insertionSort(void *, int, int, Comparator);

void swapBytes(void *, void *, int);

#endif
