#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array de float contendo 10
elementos. Imprima o endereço de cada posição desse array.  */


int main(){
float v[10]={14,15,12,9,45,66,88,93,12,1},*p;
int i;
p = v; // vetor é um conjunto de ponteiros,por isso a resposta nao precisa de " & "

for(i=0;i<10;i++)
printf("[%d] = %.1f\n",i,p[i]);  // vetor é um conjunto de ponteiros,por isso a resposta nao precisa de asterisco

system("pause");
return 0;
}
