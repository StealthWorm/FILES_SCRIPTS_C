/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ecjunior
 *
 * Created on 7 de Abril de 2018, 19:21
 */

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include "FilDin.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Fila* fi;
    Aluno aluno1,aluno2;
    int val;
    fi = criaFila();
    aluno1.matricula=15;
    aluno1.nota=5.5;
    aluno2.matricula=1;
    aluno2.nota=7.9;
    val = insereFila(fi,aluno1);
    if (val==1){
        printf ("Elemento incluído com sucesso\n");
    }
    val = insereFila(fi, aluno2);
    if (val==1){
        printf ("Elemento incluído com sucesso\n");
    }
    listarFila(fi);  
    return 0;
}

