#include <stdio.h>
#include <stdlib.h>

int main(){
    float A,M,D,IDADE;
    printf("digite sua idade em anos,meses e dias: ");
    scanf("%f %f %f",&A,&M,&D);
    IDADE=A*360+M*30+D;
    printf("Idade=%.2f\n",IDADE);
    system ("pause");
	return 0;
}
