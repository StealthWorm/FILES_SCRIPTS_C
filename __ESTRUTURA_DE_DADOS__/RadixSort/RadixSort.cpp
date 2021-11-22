/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h> 
#include <stdlib.h>

void radixSort(int *vet, int tamanho) {
    int i;
    int b[tamanho];
    int maior = vet[0];
    int exp = 1;

    for (i = 0; i < tamanho; i++) {
        if (vet[i] > maior)
            maior = vet[i];
    }

    while (maior / exp > 0) {
        int bucket[10] = {0};
        for (i = 0; i < tamanho; i++)
            bucket[(vet[i] / exp) % 10]++; // Aqui eu sei que incrementa o vetor de cada dígito que foi encontrado
        for (i = 1; i < 10; i++)
            bucket[i] += bucket[i - 1]; // não entendi a razão disso
        for (i = tamanho - 1; i >= 0; i--)
            b[--bucket[(vet[i] / exp) % 10]] = vet[i]; // consequentemente não entendi aqui lol
        for (i = 0; i < tamanho; i++)
            vet[i] = b[i];
        exp *= 10;
    }
}

void imprime(int *vet, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
}