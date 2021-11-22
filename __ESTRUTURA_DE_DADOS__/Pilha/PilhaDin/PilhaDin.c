#include <stdio.h>
#include <stdlib.h>
#include "PilhaDin.h"

struct elemento {
    Aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

    Pilha* criaPilha(){
        Pilha* pi = (Pilha*) malloc(sizeof(Pilha));
        if (pi!=NULL){
            *pi=NULL;
        }
        return pi;
    }
    
    void liberaPilha (Pilha* pi){
        if (pi!=NULL){
            Elem* no;
            while ((*pi)!=NULL){
                no = *pi;
                *pi = (*pi)->prox;
                free(no);
            }  
            free(pi);
        }
    }
    
    int tamanhoPilha (Pilha* pi){
        if (pi==NULL){
            return 0;
        }
        int cont = 0;
        Elem* no = *pi;
        while (no!=NULL){
            cont++;
            no=no->prox;
        }
        return cont;
    }
    
    void pilhaCheia (Pilha* pi){
        printf ("Pilha não esta cheia\n"); //pilha nunca fica cheia
    }
    
    int pilhaVazia (Pilha* pi){
        if (pi==NULL){
            return 1;
        }
        if (*pi==NULL){
            return 1;
        }
        return 0; //zero nega, ou seja, pilha não esta vazia
    }
    
    int inserePilha (Pilha* pi, Aluno al){
        if (pi==NULL){
            return 0;
        }
        Elem* no = (Elem*) malloc (sizeof(Elem));
        if (no==NULL){
            return 0;
        }
        no->dados=al;
        no->prox=(*pi);
        *pi=no;
        return 1;
    }
    
    int removePilha (Pilha* pi){
        if (pi==NULL){
            return 0;
        }
        if ((*pi)==NULL){
            return 0;
        }
        Elem* no = *pi;
        *pi = no->prox;
        free(no);
        return 1;
    }
    
    int consultaTopo (Pilha* pi, Aluno *al){
        if (pi==NULL){
            return 0;
        }
        if ((*pi)==NULL){
            return 0;
        }
        *al=(*pi)->dados; //endereço de al recebe o dados do topo
        return 1;
    }
    
    void listarPilha (Pilha* pi){
        int i=0;
        if (pi==NULL){
            printf ("Impossível listar\n");
            return;
        }
        Elem* no = *pi;
        while(no!=NULL){
            printf("Elemento %d - Matricula: %d | Nota: %.2f\n", i, no->dados.matricula,no->dados.nota);
            no = no->prox;
            i++;
        }
    }
   
    