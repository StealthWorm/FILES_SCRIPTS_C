/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <stdlib.h>
#include "PilhaEst.h"

struct pilha {
    int qtd;
    struct aluno dados[MAX];
};

Pilha* init() {
    Pilha* pi;
    pi = (Pilha*) malloc(sizeof (struct pilha));
    if (pi != NULL) {
        pi->qtd = 0;
    }
    return pi;
}

void freePilha(Pilha* pi) {
    free(pi);
}

int tamanhoPilha(Pilha* pi) {
    if (pi == NULL) {
        return -1;
    } else
        return pi->qtd;
}

int pilhaCheia(Pilha* pi) {
    if (pi == NULL) {
        return -1;
    }
    return (pi->qtd == MAX); //RETORNA 1 SE ESTIVER CHEIA
}

int pilhaVazia(Pilha* pi) {
    if (pi == NULL) {
        return -1;
    }
    return (pi->qtd == 0); //retorna 1 se estiver vazia
}

int inserePilha(Pilha* pi, Aluno al) {
    if (pi == NULL) {
        return 0;
    }
    if (pilhaCheia(pi)){
        return 0;
    }
    pi->dados[pi->qtd]=al;
    pi->qtd++;
    return 1;
}

int removePilha (Pilha* pi){
    if (pi==NULL||pi->qtd==0){
        return -1;
    }
    pi->qtd--;
    return 1;
}

int consultaTopo (Pilha* pi, Aluno* al){
    if (pi==NULL||pi->qtd==0){
        return -1;
    }
    *al = pi->dados[pi->qtd-1];
    return 1;
}

void listarPilha(Pilha* pi){
    int i;
    if (pi==NULL||pi->qtd==0){
        printf ("Sem elementos na pilha");
        return;
    }
    for (i=0;i<pi->qtd;i++){
        printf ("Elemento %d - Matricula: %d | Nota: %.2f\n", i, pi->dados[i].matricula,pi->dados[i].nota);
    }
}

    

