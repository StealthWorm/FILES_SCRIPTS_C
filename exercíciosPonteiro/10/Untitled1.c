#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crie uma fun��o que receba como par�metro um array e o imprima.
N�o utilize �ndices para percorrer o array, apenas aritm�tica de
ponteiros*/

int main(){
int a[6]={7,8,34,22,66,99},*p;
p = a;
printf("%d,%d,%d,%d,%d,%d\n\n",p[0],p[1],p[2],p[3],p[4],p[5],p[6]);

system("pause");
return 0;
}
