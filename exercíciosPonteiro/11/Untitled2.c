#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Considere a seguinte declara��o: int A, *B, **C, ***D; Escreva um
programa que leia a vari�vel a e calcule e exiba o dobro, o triplo e o
qu�druplo desse valor utilizando apenas os ponteiros B, C e D. O
ponteiro B deve ser usada para calcular o dobro, C o triplo e D o
qu�druplo. */

int main(){
int A = 10,*B,**C,***D;

B = &A ;
C = &B ;
D = &C;


printf("%d  |  %d  |  %d  |  %d  |\n\n",A,*B*2,**C*3,***D*4);

system("pause");
return 0;
}
