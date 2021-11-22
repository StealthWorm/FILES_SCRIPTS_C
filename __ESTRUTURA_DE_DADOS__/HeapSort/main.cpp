/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Brendow
 *
 * Created on 7 de Junho de 2018, 15:30
 */
#include "HeapSort.h"
#include <cstdlib>
#define tam 10
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int vet[tam];
    int i;
    FILE *arq;
    
     arq = fopen("C:\\Trabalhos\\numeroCincoMil.txt","r");
    // arq = fopen("C:\\Trabalhos\\numeroDezMil.txt", "r");
    //arq = fopen("C:\\Trabalhos\\numeroCemMil.txt","r");
    
    if(arq != NULL){printf("Começo Teste :\n");}
    for(i = 0; i< tam; i++){
        fscanf(arq, "%d\n", &vet[i]);
    } 
    //////////////int vet[] = {3,2,1,0,4,5,6,8,9,7};
    heapSort(vet, tam);
    imprime(vet, tam);
    
    system("pause");
    return 0;
 
    
  
}

