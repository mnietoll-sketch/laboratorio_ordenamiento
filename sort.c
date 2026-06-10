#include "sort.h"

void swapBytes(void *x, void *y, int size){
    unsigned char *a = x;
    unsigned char *b = y;

    for(int i = 0; i < size; i++){
        unsigned char tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
}

void insertSorted(void *base, int n, int size, void *x, Comparator cmp){
    unsigned char *start = base;
    int i = 0;

    while(cmp(start + i * size, x) <= 0){
        i++;
    }

    
    for(int j = n; j > i; j--){
        swapBytes(start + j * size, start + (j - 1) * size);
    }
}

void insertionSort(void *base, int n, int size, Comparator cmp){
    if(n == 0 || n == 1)
        return ;

    insertSorted(base, n - 1, size, base + (n - 1) * size, cmp);
    insertionSort(base, n - 1, size, cmp);
}
