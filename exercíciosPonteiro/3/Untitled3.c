#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que contenha duas vari�veis inteiras. Leia
essas vari�veis do teclado. Em seguida, compare seus endere�os e
exiba o conte�do do maior endere�o*/

int main(){
int i ,j, *p,*p2;
p = &i;
p2 = &j;

printf("Digite um valor");
scanf("%d",&i);
p = &i;

printf("Digite um valor");
scanf("%d",&j);
p2 = &j;

printf("%d   |   %d \n",p,p2);

if(p>p2)
printf("%d e maior que %d \n",*p,*p2);
else
printf("%d e maior que %d \n",*p2,*p);


system("pause");
return 0;
}
