#include<stdio.h>
#include<stdlib.h>

struct Aluno{
	int id;
	char nome[30];
};
struct Elemento{
	struct Aluno a;
	struct Elemento *next;
};
struct Pilha{
	int id;
	struct Elemento *inicio;
	int qtd;
};

struct ElemLista{
	struct Pilha a;
	struct ElemLista *next;
};
struct Lista{
	struct ElemLista *inicio;
	struct ElemLista *final;
	int qtd;
};

//******************************
//*****OPERA합ES LISTA********
//******************************
struct Lista* init();
void listarLista(struct Lista* li);
void excluirLista(struct Lista* li);
void inserirInicio(struct Lista *li,struct Pilha *pi);
void inserirMeio(struct Lista *li,struct Pilha *pi,int pos);
void inserirFinal(struct Lista *li,struct Pilha *pi);
struct ElemLista* removerInicio(struct Lista *li);
struct ElemLista* removerMeio(struct Lista *li,int id);
struct ElemLista* removerFinal(struct Lista *li);
struct Aluno* buscar(struct Lista* li,struct Aluno aluno);
void inserirMetade(struct Lista *li,struct Pilha *pi);
//******************************
//*****FIM - OPERA합ES LISTA****
//******************************

	//******************************************
	//*****OPERA합ES PILHA-ELEMENTO DA LISTA****
	//******************************************
	struct Elemento* popElemLista(struct Lista* li,int id);
	void pushElemLista(struct Lista* li,struct Aluno novo,int id);
	//***********************************************
	//*****FIM - OPERA합ES PILHA-ELEMENTO DA LISTA****
	//************************************************
//******************************
//*****OPERA합ES PILHA********
//******************************
struct Pilha* initPilha();
void listarPilha(struct Pilha* li);
void excluirPilha(struct Pilha* pi);
void push(struct Pilha* pi,struct Aluno novo);
struct Elemento* pop(struct Pilha* pi);
//******************************
//***** FIM - OPERA합ES PILHA***
//******************************
