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
