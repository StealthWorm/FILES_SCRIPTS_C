/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FilaEst.h
 * Author: ecjunior
 *
 * Created on 3 de Abril de 2018, 23:20
 */

#ifndef FILAEST_H
#define FILAEST_H
#define MAX 10

#ifdef __cplusplus
extern "C" {
#endif

    struct aluno{
        int matricula;
        float nota;
    };
    typedef struct aluno Aluno;
    
    typedef struct fila Fila;
    
    Fila* criaFila();
    void tamanhoFila (Fila* fi);
    int filaCheia (Fila* fi);
    int filaVazia (Fila* fi);
    void insereFila (Fila* fi, Aluno al);
    void removeFila (Fila* fi);
    void consultaFila (Fila* fi, Aluno* al);
    void listarFila (Fila* fi);

#ifdef __cplusplus
}
#endif

#endif /* FILAEST_H */

