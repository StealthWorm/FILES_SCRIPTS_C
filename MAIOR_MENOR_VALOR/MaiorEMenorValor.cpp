#include <stdio.h>
#include <stdlib.h>

int main () {
	float A,B,C,D;
	printf("digite 4 valores: ");
	scanf("%f %f %f %f",&A,&B,&C,&D);
	if(A>B&&A>C&&A>D){
		printf("Maior Valor=A\n");
			}else{if(B>C&&B>D){
			printf("Maior Valor=B\n");
				}else{if(C>D){
				printf("Maior Valor=C\n");
					}else{
					printf("Maior Valor=D\n");
                        }
			
                    }
                }
        
    system("pause");
	return 0;
	

}












//13) Construa um Algoritmo que dado quatro valores, A, B, C e D, o Algoritmo imprima o maior e o menor valor.

