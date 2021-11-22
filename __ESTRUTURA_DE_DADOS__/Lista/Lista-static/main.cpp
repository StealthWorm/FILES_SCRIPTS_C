#include<stdlib.h>
#include<stdio.h>

void inserirInicio(Aluno *paluno,Lista *pli){
	if(pli==NULL)return;
	if(pli->qtd==MAX)return;
	int i=li->qtd-1;
	while(i>=0){
		li->dados[i+1]=li->dados[i];
		i--;
	}
	li->dados[0]=paluno;
	li->qtd++;
}
void inserirFim(Aluno *paluno,Lista* pli){
	if(pli==NULL)return;
	if(pli->qtd==MAX)return;
	if(li->qtd==0){
		li->dados[0]=paluno;
		return;
	}
	int i=0;
	while(i<MAX){
		if(li->dados[i]=="")
			return;
		i++;
	}
	while(i<MAX){
	li->dados[i]=li->dados[i+1];
	i++;
	}	
	int j=MAX;
	while(j>0){
		if(li->dados[j-1]!="")return;
		j--;
	}
	li->dados[j]=paluno;
	li->qtd++;
}
