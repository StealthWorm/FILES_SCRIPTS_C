#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escreva uma fun��o que dado um n�mero real passado como
par�metro, retorne a parte inteira e a parte fracion�ria deste
n�mero. Escreva um programa que chama esta fun��o. Prot�tipo
void frac(float num, int*inteiro,float* frac). */

void frac(float num, int inteiro,float frac){
printf("parte inteira de %.2f : %d\n\n",num,(int)inteiro);
printf("parte fracionaria de %.2f :%.2f\n\n",num,frac);
}

int main(){
float A = 10.5,*B;

B = &A;

frac(A,*B,*B);

system("pause");
return 0;
}
