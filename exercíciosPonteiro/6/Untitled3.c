#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que contenha um array de float contendo 10
elementos. Imprima o endere�o de cada posi��o desse array.  */


int main(){
float v[10]={14,15,12,9,45,66,88,93,12,1},*p;
int i;
p = v; // vetor � um conjunto de ponteiros,por isso a resposta nao precisa de " & "

for(i=0;i<10;i++)
printf("[%d] = %.1f\n",i,p[i]);  // vetor � um conjunto de ponteiros,por isso a resposta nao precisa de asterisco

system("pause");
return 0;
}
