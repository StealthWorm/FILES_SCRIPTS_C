/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h> 
#include <stdlib.h>

void ShellSort(int *vet, int tam) {
   int i , j , value;
 int gap = 1;
  
 do {
  gap = 3*gap+1;
 } while(gap < tam);
  
 do {
  gap /= 3;
  for(i = gap; i < tam; i++) {
   value = vet[i];
   j = i - gap;
    
   while (j >= 0 && value < vet[j]) {
    vet[j + gap] = vet[j];
    j -= gap;
   }
   vet[j + gap] = value;
  }
 }while(gap > 1);
}

void imprime(int *vet, int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%d ", vet[i]);
    }
}
