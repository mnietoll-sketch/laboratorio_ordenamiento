#include "sort.h"
#include <stdio.h>

int intComparator(const void *x, const void *y){
    int a = *(int *)x;
    int b = *(int *)y;

    if(a < b) return -1;
    if(a > b) return 1;
    return 0;
}

int main(){
    int a[] = {5,1,2,7,3};
    insertionSort(a, 5, sizeof(int), intComparator);
    for(int i = 0; i < 5; i++){
        printf("%d - ", a[i]);
    }
    printf("\n");
}
