/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h> 
#include <stdlib.h>



void insertSort(int *vet, int tam) {
    int i, atual, j;
        for (i = 0; i < tam; i++) {
            atual = vet[i];
            j = i - 1;
            while (j >= 0 && vet[j] >= atual) {
                vet[j + 1] = vet[j];
                j--;
            }
            vet[j + 1] = atual;;
        }
        
    }

void imprime(int *v, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
}
 
