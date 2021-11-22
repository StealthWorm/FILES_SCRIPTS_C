#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int x,a,b,r,y;
	setlocale(LC_ALL,"Portuguese");
	printf("Qual casa gostaria de saber: ");
	scanf("%d",&x);
	if(x<=0)
	printf("Não existe\n");
	else{
	a=0;
	b=1;
	y=1;
	r=1;
	printf("pos %d = %d\n",y,r);
	while(y!=x){
		r=a+b;
		y++;
		a=b;
		b=r;		
	printf("pos %d = %d\n",y,r);
				}
			}
system("pause");
return 0;	
}

