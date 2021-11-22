
#ifndef INSERTSORT_H
#define INSERTSORT_H

#ifdef __cplusplus
extern "C" {
#endif

#include "MergeSort.cpp"


void merge(int *vet, int inicio, int meio, int fim);
void mergeSort(int *vet, int inicio, int fim);
void imprime(int *v, int n);



#ifdef __cplusplus
}
#endif

#endif /* INSERTSORT_H */

