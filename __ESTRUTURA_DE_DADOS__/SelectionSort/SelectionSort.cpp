/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h> 
#include <stdlib.h>



void SelectionSort (int *v, int tam){
    int i, menor, j, aux;
    for(i=0; i<tam; i++){
        menor = i;         
        for(j=i+1; j<tam; j++){
            if(v[menor] > v[j]){
               menor = j;
            }                  
        }
        aux = v[i]; 
        v[i]= v[menor]; 
        v[menor]= aux; 
        }
}
 
void imprime(int *vet, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d ", vet[i]); 
    }
}