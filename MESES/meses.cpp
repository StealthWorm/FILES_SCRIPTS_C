#include <stdio.h>
#include <stdlib.h>

int main () {
	int m;
	printf("digite um valor de 1 a 12: ");
	scanf("%d",&m);
	if(m==1)
	printf("JANEIRO\n");
	else if(m==2)
	printf("FEVEREIRO\n");
	else if(m==3)
	printf("MARÇO\n");
	else if(m==4)
	printf("ABRIL\n");
	else if(m==5)
	printf("MAIO\n");
	else if(m==6)
	printf("JUNHO\n");
	else if(m==7)
	printf("JULHO\n");
	else if(m==8)
	printf("AGOSTO\n");
	else if(m==9)
	printf("SETEMBRO\n");
	else if(m==10)
	printf("OUTUBRO\n");
	else if(m==11)
	printf("NOVEMBRO\n");
	else if(m==12)
	printf("DEZEMBRO\n");
	else
	printf("valor não corresponde a um mes existente\n");
	system("pause");
	return 0;
}
