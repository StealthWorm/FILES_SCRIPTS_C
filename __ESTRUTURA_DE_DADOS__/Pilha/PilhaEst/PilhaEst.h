/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PilhaEst.h
 * Author: ecjunior
 *
 * Created on 25 de Março de 2018, 20:39
 */

#ifndef PILHAEST_H
#define PILHAEST_H
#define MAX 100

#ifdef __cplusplus
extern "C" {
#endif

       
    struct aluno{
        int matricula;
        float nota;
    };
    typedef struct aluno Aluno;
   
    typedef struct pilha Pilha;
    
    Pilha* init();
    void freePilha (Pilha* pi);
    int tamanhoPilha (Pilha* pi);
    int pilhaCheia (Pilha* pi);
    int pilhaVazia (Pilha* pi);
    int inserePilha(Pilha* pi, Aluno al);
    int removePilha (Pilha* pi);
    int consultaTopo (Pilha* pi, Aluno* al);
    void listarPilha(Pilha* pi);

#ifdef __cplusplus
}
#endif

#endif /* PILHAEST_H */

