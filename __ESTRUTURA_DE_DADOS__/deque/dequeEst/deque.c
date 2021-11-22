#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

struct deque {
    int inicio, final, qnt;
    Aluno dados [MAX];
};

Deque* criaDeque() {
    Deque* dq;
    dq = (Deque*) malloc(sizeof (Deque));
    if (dq != NULL) {
        dq->inicio = 0;
        dq->final = 0;
        dq->qnt = 0;
    }
    return dq;
}

void liberaDeque(Deque* dq) {
    free(dq);
}

int tamanhoDeque(Deque *dq) {
    if (dq == NULL) {
        return -1;
    }
    return dq->qnt;
}

int dequeVazio(Deque* dq) {
    if (dq == NULL) {
        return -1;
    }
    if (dq->qnt == 0) {
        return 1;
    } else {
        return 0;
    }
}

int dequeCheio(Deque* dq) {
    if (dq == NULL) {
        return -1;
    }
    if (dq->qnt == MAX) {
        return 1;
    } else {
        return 0;
    }
}

int consultaInicio(Deque* dq, Aluno* al) {
    if (dq == NULL || dq->qnt == 0) {
        return 0;
    }
    *al = dq->dados[dq->inicio];
    return 1;
}

int consultaFinal(Deque* dq, Aluno* al) {
    if (dq == NULL || dq->qnt == 0) {
        return 0;
    }
    int pos = dq->final - 1;
    if (pos < 0) {
        pos = MAX - 1;
    }
    *al = dq->dados[pos];
    return 1;
}

int insereInicio(Deque* dq, Aluno al) {
    if (dq == NULL || dq->qnt == MAX) {
        return 0;
    }
    dq->inicio--;
    if (dq->inicio < 0) {
        dq->inicio = MAX - 1;
    }
    dq->dados[dq->inicio] = al;
    dq->qnt++;
}

int insereFinal(Deque* dq, Aluno al) {
    if (dq == NULL || dq->qnt == MAX) {
        return 0;
    }
    dq->dados[dq->inicio] = al;
    dq->final = (dq->final + 1) % MAX;
    dq->qnt++;
    return 1;
}

int removeInicio(Deque* dq) {
    if (dq == NULL || dq->qnt == 0) {
        return 0;
    }
    dq->inicio = (dq->inicio + 1) % MAX;
    dq->qnt--;
    return 1;
}

int removeFinal(Deque* dq) {
    if (dq == NULL || dq->qnt == 0) {
        return 0;
    }
    dq->final--;
    if (dq->final < 0) {
        dq->final = MAX - 1;
    }
    dq->qnt--;
    return 1;
}

void listarDeque (Deque* dq){
    if (dq == NULL || dq->qnt == 0) {
        printf ("Impossível listar\n");
        return ;
    }
    int i;
    for (i=0;i<dq->qnt;i++){
        printf ("Elemento %d: Matricula: %d, Nota: %f\n", i, dq->dados[i].matricula, dq->dados[i].nota);
    }
}