#include <stdio.h>
#include <stdlib.h>
#include "FilaEst.h"

struct fila {
    int inicio, final, qtd;
    Aluno dados [MAX];
};

Fila* criaFila (){
    Fila *fi = (Fila*) malloc (sizeof (Fila));
    if (fi!=NULL){
        fi->final=0;
        fi->inicio=0;
        fi->qtd=0;
    }
    return fi;
}

void tamanhoFila (Fila* fi){
    if (fi==NULL){
        printf ("Fila Vazia ou não criada. Impossível consultar\n");
        return;
    }
    printf ("Tamanho da Fila: %d\n",fi->qtd);
}

int filaCheia (Fila* fi){
    if (fi==NULL){
        printf ("Fila Vazia ou não criada. Impossível consultar\n");
        return -1;
    }
    if (fi->qtd==MAX){
        printf ("Fila está cheia");
        return 1;
    } else{
        printf ("Fila não está cheia");
        return 0;
    }
}

int filaVazia (Fila* fi){
    if (fi==NULL){
        printf ("Fila Vazia ou não criada. Impossível consultar\n");
        return -1;
    }
    if (fi->qtd==0){
        printf ("Fila Vazia\n");
        return 1;
    } else{
        printf ("Fila não Vazia\n");
        return 0;
    }
}

void insereFila (Fila* fi, Aluno al){
    if (fi==NULL){
        printf ("Fila Vazia ou não criada. Impossível consultar\n");
        return;
    }
    if (filaCheia(fi)){
        printf ("Impossível adicionar. Fila está cheia\n");
        return;
    }
    fi->dados[fi->final]=al;
    fi->final=(fi->final+1)%MAX;
    fi->qtd++;
    printf ("Elemento inserido no final com sucesso\n");
}

void removeFila (Fila* fi){
    if (fi==NULL || filaVazia(fi)){
        printf ("Fila Vazia ou não criada. Impossível consultar\n");
        return;
    }
    fi->inicio = (fi->inicio+1)%MAX;
    fi->qtd--;
    printf ("Elemento do inicio removido com sucesso\n");
}

void consultaFila (Fila* fi, Aluno* al){
    if (fi==NULL || filaVazia(fi)){
        printf ("Fila Vazia ou não criada. Impossível consultar\n");
        return;
    }
    *al = fi->dados[fi->inicio];
}

void listarFila (Fila* fi){
    int i;
    for (i=0;i<fi->qtd;i++){
        printf("Elemento %d - Matricula: %d | Nota: %.2f\n", i, fi->dados[i].matricula,fi->dados[i].nota);
    }
}