#include <stdio.h>
#include <stdlib.h>
#include "FilDin.h"

struct fila {
    Elem* inicio;
    Elem* final;
};

struct elemento {
    Aluno dados;
    Elem* prox;
};

Fila* criaFila (){
    Fila* fi = (Fila*) malloc (sizeof(Fila));
    if (fi!=NULL){
        fi->inicio=NULL;
        fi->final=NULL;
    }
    return fi;
}

void liberaFila (Fila* fi){
    if (fi!=NULL){
        Elem* no;
        while (fi->inicio!=NULL){
            no=fi->inicio;
            fi->inicio=fi->inicio->prox;
            free(no);
        }
        free(fi);
    }
}

int tamanhoFila (Fila* fi){
    if (fi==NULL){
        return 0;
    }
    int cont=0;
    Elem* no = fi->inicio;
    while (no!=NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

void filaCheia (Fila* fi){
    printf ("Fila não está cheia\n");
}

int filaVazia (Fila* fi){
    if (fi==NULL){
        return -1;
    }
    if (fi->inicio==NULL){
        return 1;
    }
    return 0;
}

int insereFila (Fila* fi, Aluno al){
    if (fi=NULL){
        return 0;
    }
    Elem* no = (Elem*) malloc (sizeof(Elem));
    if (no==NULL){
        return 0;
    }
    no->dados=al;
    no->prox=NULL;
    if (fi->final==NULL){ //fila Vazia
        fi->inicio=no;
    } else {
        fi->final->prox=no;
    }
    fi->final=no;
    return 1;
}

int removeFila (Fila* fi){
    if (fi==NULL){
        return 0;
    }
    if (fi->final=NULL);{
        return 0;
    }
    Elem* no = (Elem*) malloc (sizeof(Elem));
    fi->inicio = fi->inicio->prox;
    if (fi->inicio==NULL){
        fi->final=NULL;
    }
    free (no);
    return 1;
}

int consultaFila (Fila* fi, Aluno* al){
    if (fi==NULL){
        return 0;
    }
    if (fi->inicio=NULL){
        return 0;
    }
    *al = fi->inicio->dados;
    return 1;
}

void listarFila (Fila* fi){
    if (fi==NULL){
        printf ("Fila não criada");
    }
    int cont=0;
    Elem* no = fi->inicio;
    while (no!=NULL){
        printf("Elemento %d - Matricula: %d | Nota: %.2f\n", 
                cont, no->dados.matricula,no->dados.nota);
        cont++;
        no = no->prox;
    }
}

