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
#include "QuickSort.h"
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int tam = 6;
    int vet[] = {2,5,4,1,8,6};
    quick_sort(vet, 0, tam - 1);
    imprime(vet, tam);
    
    system("pause");
    return 0;
 
    
  
}

