#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia 2 valores inteiros e chame uma função
que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta
função é chamada passando duas variáveis A e B por exemplo e,
após a execução da função, A conterá o valor de B e B terá o valor
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
troca(p,p2);  // vc manda sem asterisco pq é o endereço que vc seta, dai vc trata o apontamento no void

system("pause");
return 0;
}
