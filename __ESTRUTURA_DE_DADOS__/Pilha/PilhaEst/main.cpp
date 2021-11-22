/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ecjunior
 *
 * Created on 25 de Março de 2018, 20:39
 */

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include "PilhaEst.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Pilha* pi;
    Aluno al;
    int validador;
    pi = init();

    al.matricula = 25;
    al.nota = 7.5;

    validador = inserePilha(pi, al);

    if (validador == 1) {
        printf("Incluído com Sucesso\n");
    } else {
        printf("Inclusão não deu certo\n");
    }

    al.matricula = 1;
    al.nota = 9.5;

    validador = inserePilha(pi, al);
    if (validador == 1) {
        printf("Incluído com Sucesso\n");
    } else {
        printf("Inclusão não deu certo\n");
    }

    listarPilha(pi);

    return 0;
}

