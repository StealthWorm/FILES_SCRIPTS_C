/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h> 
#include <stdlib.h>

void bubbleSort(int *vet, int tam) {
    int i, t, j = tam, s = 1;
    while (s == 1) {
        s = 0;
        for (i = 1; i < j; i++) {
            if (vet[i] < vet[i - 1]) {
                t = vet[i];
                vet[i] = vet[i - 1];
                vet[i - 1] = t;
                s = 1;
            }
        }
        j--;
    }
}

void imprime(int *vet, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
}
