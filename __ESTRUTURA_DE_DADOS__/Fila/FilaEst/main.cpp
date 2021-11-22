/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ecjunior
 *
 * Created on 3 de Abril de 2018, 23:19
 */

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include "FilaEst.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Fila* fi;
    Aluno al,all,al2;
    fi = criaFila();
    al.matricula=15;
    al.nota=5.5;
    all.matricula=1;
    all.nota=7.9;
    al2.matricula=76;
    al2.nota=8.2;
    insereFila(fi,al);
    insereFila(fi, all);
    insereFila(fi,al2);
    removeFila(fi);
    listarFila(fi);    
    return 0;
}

