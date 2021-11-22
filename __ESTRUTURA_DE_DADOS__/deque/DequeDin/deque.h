/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   deque.h
 * Author: HP
 *
 * Created on 16 de Abril de 2018, 16:20
 */

#ifndef DEQUE_H
#define DEQUE_H

#ifdef __cplusplus
extern "C" {
#endif
    
    struct aluno {
        int matricula;
        float nota;
    };
    
    typedef struct aluno Aluno;
    
    typedef struct deque Deque;
    
    Deque* criaDeque ();
    void liberaDeque (Deque* dq);
    int tamanhoDeque (Deque *dq);
    int dequeVazio (Deque* dq);
    int dequeCheio (Deque* dq);
    int consultaInicio (Deque* dq, Aluno* al);
    int consultaFinal (Deque* dq, Aluno* al);
    int insereInicio (Deque* dq, Aluno al);
    int insereFinal (Deque* dq, Aluno al);
    int removeInicio (Deque* dq);
    int removeFinal (Deque* dq);
    void listarDeque (Deque* dq);

#ifdef __cplusplus
}
#endif

#endif /* DEQUE_H */

