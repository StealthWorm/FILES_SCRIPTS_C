#include <stdio.h>
#include <stdlib.h>

int main () {
    int N,C,TAB;
    printf("Escreva um valor: ");
    scanf("%d",&N);
    if(N==0)
        printf("0");
        else 
            for(TAB=0; TAB<=10; TAB++){
                C=N*TAB;
                     printf("%d x %d = %d\n",N,TAB,C);  //se vc quiser deixar mais apresentavel, voce coloca as multip. na ''amostra'', printf("%d x %d = %d\n", n,i,n*1);
                                      }   
    system("pause");
	return 0;
}
	         
