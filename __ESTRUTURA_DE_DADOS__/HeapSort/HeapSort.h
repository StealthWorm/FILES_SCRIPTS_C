
#ifndef INSERTSORT_H
#define INSERTSORT_H

#ifdef __cplusplus
extern "C" {
#endif

#include "HeapSort.cpp"

void criaHeap(int *v, int i, int f);
void heapSort(int *v, int n);
void imprime(int *v, int n);



#ifdef __cplusplus
}
#endif

#endif /* INSERTSORT_H */

