#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"trabalho.h"

int main(){
	struct Pilha *pi,*pr,*pw;
	struct Lista *li;
	struct Aluno abc[10];
	struct Elemento elem;
	int i;	
	pi=initPilha();
	pr=initPilha();
	pw=initPilha();
	li=init();
	
	for(i=0;i<10;i++){
		abc[i].id=(i+3)*3;
		strcpy(abc[i].nome,"Muriel");
		push(pi,abc[i]);
	}
	for(i=0;i<10;i++){
		abc[i].id=(i+4)*9;
		strcpy(abc[i].nome,"Jose");
		push(pr,abc[i]);
	}
	inserirFinal(li,pw);
	for(i=0;i<10;i++){
		abc[i].id=(i+6)*8;
		strcpy(abc[i].nome,"Lima");
		pushElemLista(li,abc[i],2);
	}

	pop(pi);
	pop(pi);
	
	inserirInicio(li,pi);
		inserirInicio(li,pi);
		inserirInicio(li,pi);
			inserirInicio(li,pi);
				inserirInicio(li,pi);
	inserirMetade(li,pr);
	//removerMetade(li);
	printf("Quantidade da pilha: %d\n",pi->qtd);
	printf("Quantidade da pilha: %d\n",pr->qtd);
	printf("Quantidade da Lista: %d\n",li->qtd);
	
	
	listarLista(li);
	excluirPilha(pi);
	system("pause");
}
