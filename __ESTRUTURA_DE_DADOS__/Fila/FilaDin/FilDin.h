#ifndef FILDIN_H
#define FILDIN_H

#ifdef __cplusplus
extern "C" {
#endif

    struct aluno{
        int matricula;
        float nota;
    };
    typedef struct aluno Aluno;
    typedef struct elemento Elem;
    typedef struct fila Fila;
    
    Fila* criaFila ();
    void liberaFila (Fila* fi);
    int tamanhoFila (Fila* fi);
    void filaCheia (Fila* fi);
    int filaVazia (Fila* fi);
    int insereFila (Fila* fi, Aluno al);
    int removeFila (Fila* fi);
    int consultaFila (Fila* fi, Aluno* al);
    void listarFila (Fila* fi);



#ifdef __cplusplus
}
#endif

#endif /* FILDIN_H */

