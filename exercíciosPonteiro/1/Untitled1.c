#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real, e char. Associe as vari�veis aos
ponteiros (use &). Modifique os valores de cada vari�vel usando os
ponteiros. Imprima os valores das vari�veis antes e ap�s a
modifica��o*/

int main(){
int i = 2, *p;
float f = 3.0, *p2;
char c = 'a', *p3;
printf(" %d\n %.1f\n %c\n",i,f,c);
p = &i;
p2 = &f;    //pontiros sempre precisam de endere�amento
p3 = &c;
printf("mostra valor : %d\n",*p); // se vc printar com asterisco ele retorna o valor alocado
printf("mostra endere�o : %d\n",p);
printf("mostra valor : %f\n",*p2);
printf("mostra endere�o : %f\n",p2);
printf("mostra valor : %c\n",*p3);
printf("mostra endere�o : %c\n",p3);


system("pause");
return 0;
}
