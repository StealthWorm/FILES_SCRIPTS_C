/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h> 
#include <stdlib.h>

void quick_sort(int *vet, int esqu, int dire) {
    int i, j, x, y;

    i = esqu;
    j = dire;
    x = vet[(esqu + dire) / 2];

    while (i <= j) {
        while (vet[i] < x && i < dire) {
            i++;
        }
        while (vet[j] > x && j > esqu) {
            j--;
        }
        if (i <= j) {
            y = vet[i];
            vet[i] = vet[j];
            vet[j] = y;
            i++;
            j--;
        }
    }

    if (j > esqu) {
        quick_sort(vet, esqu, j);
    }
    if (i < dire) {
        quick_sort(vet, i, dire);
    }
}

void imprime(int *vet, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d", vet[i]);
    }
}
