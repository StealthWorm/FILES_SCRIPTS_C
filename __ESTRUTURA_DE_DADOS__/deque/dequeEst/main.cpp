/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: HP
 *
 * Created on 16 de Abril de 2018, 16:20
 */

#include <cstdlib>
#include "deque.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Deque* dq;
    Aluno al,all,al2;
    Aluno *aux;
    dq=criaDeque();
    al.matricula=15;
    al.nota=5.5;
    all.matricula=1;
    all.nota=7.9;
    al2.matricula=76;
    al2.nota=8.2;
    insereInicio(dq,al);
    insereFinal(dq,all);
    insereInicio(dq,al2);
    listarDeque(dq);
    return 0;
}

