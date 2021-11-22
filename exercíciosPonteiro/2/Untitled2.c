#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que contenha duas variáveis inteiras.
Compare seus endereços e exiba o maior endereço.*/

int main(){
int i = 2,j= 4, *p,*p2;
p = &i;
p2 = &j;

printf("%d\n",p);
printf("%d\n",p2);
if(p>p2)
printf("%d e maior que %d \n",*p,*p2);
else
printf("%d e maior que %d \n",*p2,*p);


system("pause");
return 0;
}
