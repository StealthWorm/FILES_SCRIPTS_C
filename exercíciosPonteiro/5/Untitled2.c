#include <stdio.h>
#include <stdlib.h>

/*Elaborar um programa que leia dois valores inteiros (A e B). Em
seguida faça uma função que retorne a soma do dobro dos dois
números lidos. A função deverá armazenar o dobro de A na própria
variável A e o dobro de B na própria variável B. */

void dobro(int *p,int *p2){
    printf("%d   |   %d\n",*p*2,*p2*2);
}

int main(){
int i=10 ,j=18, *p,*p2;
p = &i;
p2 = &j;

printf("%d   |   %d\n",*p,*p2);
dobro(p,p2);  // vc manda sem asterisco pq é o endereço que vc seta, dai vc trata o apontamento no void

system("pause");
return 0;
}
