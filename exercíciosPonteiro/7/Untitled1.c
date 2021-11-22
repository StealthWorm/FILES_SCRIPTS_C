#include <stdio.h>
#include <stdlib.h>
#define N 5

/*Crie um programa que contenha um array de inteiros contendo 5
elementos. Utilizando apenas aritmética de ponteiros, leia esse
array do teclado e imprima o dobro de cada valor lido  */


int main(){
int v[N],*p;
int i=0,x;
p = v;
while(i<N){
printf("Digite um valor para o vetor:\n");
scanf("%d",&x);
p[i] = x *2;
i++;
}
for(i=0;i<N;i++)
printf("[%d] = %d\n",i,p[i]);  // vetor é um conjunto de ponteiros,por isso a resposta nao precisa de asterisco

system("pause");
return 0;
}
