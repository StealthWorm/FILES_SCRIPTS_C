/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h> 
#include <stdlib.h>



void criaHeap(int *vet, int i, int tam) {
    int aux = vet[i];
    int j = (i * 2) + 1;
    while (j <= tam) {
        if (j < tam) {
            if (vet[j] < vet[j + 1]) {
                j = j + 1;
            }
        }
        if (aux < vet[j]) {
        vet[i] = vet[j];
        i = j;
        j = (2 * i) + 1;
    } else {
        j = tam + i;
    }

    }

    vet[i] = aux;
}

void heapSort(int *vet, int tam) {
    int i, aux;
    for (i = (tam - 1) / 2; i >= 0; i--) {
        criaHeap(vet, i, tam - 1);
    }
    for (i = tam - 1; i >= 1; i--) {
        aux = vet[0];
        vet[0] = vet[i];
        vet[i] = aux;
        criaHeap(vet, 0, i - 1);

    }
}

void imprime(int *v, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
}
