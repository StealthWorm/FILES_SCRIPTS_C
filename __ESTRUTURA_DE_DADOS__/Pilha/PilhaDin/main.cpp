/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ecjunior
 *
 * Created on 31 de Março de 2018, 17:57
 */

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include "PilhaDin.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Pilha* pi;
    Aluno al,all;
    pi = criaPilha();
    al.matricula=15;
    al.nota=5.5;
    all.matricula=1;
    all.nota=7.9;
    inserePilha(pi,al);
    inserePilha(pi, all);
    listarPilha(pi);    
    return 0;
}

