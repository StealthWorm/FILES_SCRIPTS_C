#include <stdio.h>
#include <stdlib.h>

int main(){
	float num,s=0;
    int q=0;
	printf("Digite n valores (zero para encerrar): ");
	scanf("%f",&num);
	while(num!=0){
		if(num>0)
			s=s+num; //ou s+=num;(soma recebe ele mesmo mais num)
		else
			q++;
			scanf("%f",&num);
				}
				printf("Soma positivos= %.1f\n",s);
				printf("Quantidade negativos= %d\n",q);
system("pause");
return 0;			
}
