#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que contenha duas variáveis inteiras. Leia
essas variáveis do teclado. Em seguida, compare seus endereços e
exiba o conteúdo do maior endereço*/

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
