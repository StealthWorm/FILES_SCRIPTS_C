#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

struct elemento {
    struct elemento *ant;
    Aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;

struct deque {
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};

Deque* criaDeque() {
    Deque* dq = (Deque*) malloc(sizeof (Deque));
    if (dq != NULL) {
        dq->inicio = 0;
        dq->final = 0;
        dq->qnt = 0;
    }
    return dq;
}

void liberaDeque(Deque* dq) {
    if (dq != NULL) {
        Elem *no;
        while (dq->inicio != NULL) {
            no = dq->inicio;
            dq->inicio = dq->inicio->prox;
            free(no);
        }
        free(dq);
    }
}

int tamanhoDeque(Deque *dq) {
    if (dq == NULL) {
        return 0;
    }
    return dq->qnt;
}

int dequeVazio(Deque* dq) {
    if (dq == NULL) {
        return 1;
    }
    if (dq->inicio == NULL) {
        return 1;
    }
    return 0;
}

int dequeCheio(Deque* dq) {
    if (dq == NULL) {
        return -1;
    }
    return 0;
}

int consultaInicio(Deque* dq, Aluno* al) {
    if (dq == NULL || dq->inicio == NULL) {
        return 0;
    }
    *al = dq->inicio->dados;
    return 1;
}

int consultaFinal(Deque* dq, Aluno* al) {
    if (dq == NULL || dq->inicio == NULL) {
        return 0;
    }
    *al = dq->final->dados;
    return 1;
}

int insereInicio(Deque* dq, Aluno al) {
    if (dq == NULL) {
        return 0;
    }
    Elem *no = (Elem*) malloc(sizeof (Elem));
    if (no == NULL) {
        return 0;
    }
    no->dados = al;
    no->prox = dq->inicio;
    no->ant = NULL;
    if (dq->inicio == NULL) {
        dq->final = no;
    } else {
        dq->inicio->ant = no;
    }
    dq->inicio = no;
    dq->qtd++;
    return 1;
}

int insereFinal(Deque* dq, Aluno al) {
    if (dq == NULL) {
        return 0;
    }
    Elem *no = (Elem*) malloc(sizeof (Elem));
    if (no == NULL) {
        return 0;
    }
    no->dados = al;
    no->prox = NULL;
    if (dq->final == NULL) {
        dq->inicio = no;
    } else {
        no->ant = dq->final;
        dq->final->prox = no;
    }
    dq->final = no;
    dq->qtd++;
    return 1;
}

int removeInicio(Deque* dq) {
    if (dq == NULL) {
        return 0;
    }
    if (dq->inicio == NULL) {
        return 0;
    }
    Elem *no = dq->inicio;
    dq->inicio = dq->inicio->prox;
    if (dq->inicio == NULL) {
        dq->final = NULL;
    } else {
        dq->inicio->ant = NULL;
    }
    free(no);
    dq->qtd--;
    return 1;
}

int removeFinal(Deque* dq) {
    if (dq == NULL) {
        return 0;
    }
    if (dq->inicio == NULL) {
        return 0;
    }
    Elem *no = dq->final;
    if (no == dq->inicio) {
        dq->inicio = NULL;
        dq->final = NULL;
    } else {
        no ->prox->ant = NULL;
        dq->final = no->ant;
    }
    free(no);
    dq->qtd--;
    return 1;
}

void listarDeque(Deque* dq) {
    /*if (dq == NULL || dq->qnt == 0) {
        printf("Impossível listar\n");
        return;
    }
    int i;
    for (i = 0; i < dq->qnt; i++) {
        printf("Elemento %d: Matricula: %d, Nota: %f\n", i, dq->dados[i].matricula, dq->dados[i].nota);
    }*/
}