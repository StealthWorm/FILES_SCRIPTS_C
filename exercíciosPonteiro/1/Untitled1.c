#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real, e char. Associe as variáveis aos
ponteiros (use &). Modifique os valores de cada variável usando os
ponteiros. Imprima os valores das variáveis antes e após a
modificação*/

int main(){
int i = 2, *p;
float f = 3.0, *p2;
char c = 'a', *p3;
printf(" %d\n %.1f\n %c\n",i,f,c);
p = &i;
p2 = &f;    //pontiros sempre precisam de endereçamento
p3 = &c;
printf("mostra valor : %d\n",*p); // se vc printar com asterisco ele retorna o valor alocado
printf("mostra endereço : %d\n",p);
printf("mostra valor : %f\n",*p2);
printf("mostra endereço : %f\n",p2);
printf("mostra valor : %c\n",*p3);
printf("mostra endereço : %c\n",p3);


system("pause");
return 0;
}
