#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que leia 2 valores inteiros e chame uma fun��o
que receba estas 2 vari�veis e troque o seu conte�do, ou seja, esta
fun��o � chamada passando duas vari�veis A e B por exemplo e,
ap�s a execu��o da fun��o, A conter� o valor de B e B ter� o valor
de A. */
void troca(int *p,int *p2){
    int aux;
    aux = p;
    p = p2;
    p2=aux;
    printf("%d   |   %d\n",*p,*p2);
}

int main(){
int i=10 ,j=18, *p,*p2;
p = &i;
p2 = &j;

printf("%d   |   %d\n",*p,*p2);
troca(p,p2);  // vc manda sem asterisco pq � o endere�o que vc seta, dai vc trata o apontamento no void

system("pause");
return 0;
}
