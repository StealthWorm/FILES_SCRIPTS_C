/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PilhaDin.h
 * Author: ecjunior
 *
 * Created on 31 de Março de 2018, 17:57
 */

#ifndef PILHADIN_H
#define PILHADIN_H

#ifdef __cplusplus
extern "C" {
#endif
    
    struct aluno{
        int matricula;
        float nota;
    };
    typedef struct aluno Aluno;
   
    typedef struct elemento* Pilha;
    
    
    Pilha* criaPilha();
    void liberaPilha (Pilha* pi);
    int tamanhoPilha (Pilha* pi);
    void pilhaCheia (Pilha* pi);
    int pilhaVazia (Pilha* pi);
    int inserePilha (Pilha* pi, Aluno al);
    int removePilha (Pilha* pi);
    int consultaTopo (Pilha* pi, Aluno *al);    
    void listarPilha (Pilha* pi);
    

#ifdef __cplusplus
}
#endif

#endif /* PILHADIN_H */

