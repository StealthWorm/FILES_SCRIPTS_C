#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Elabore uma função que receba duas strings como parâmetros e
verifique se a segunda string ocorre dentro da primeira. Use
aritmética de ponteiros para acessar os caracteres das strings.    */


int main(){
char a[30],b[30],*p,*p2;
int i;
p = a;
p2 = b;

printf("Digite uma palavra 1:\n");
gets(a);
printf("Digite uma palavra 2:\n");
gets(b);

printf("\n");
printf(p);
printf("\n");
printf(p2);
printf("\n");

i = strcmp(p, p2);
if(i == 0)
    printf("\npossui essa string\n");
else
    printf("\nnao possui essa string\n");

system("pause");
return 0;
}
