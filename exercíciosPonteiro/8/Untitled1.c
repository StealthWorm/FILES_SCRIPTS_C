#include <stdio.h>
#include <stdlib.h>
#define N 5

/*Crie um programa que contenha um array contendo 5 elementos
inteiros. Leia esse array do teclado e imprima o endereço das
posições contendo valores pares.   */


int main(){
int v[N],*p;
int i=0,x;
p = v;
while(i<N){
printf("Digite um valor para o vetor:\n");
scanf("%d",&x);
p[i] = x ;
i++;
}
for(i=0;i<N;i++)
if(p[i]%2==0)
printf("[%d] = %d\n",i,p[i]);  // vetor é um conjunto de ponteiros,por isso a resposta nao precisa de asterisco

system("pause");
return 0;
}
