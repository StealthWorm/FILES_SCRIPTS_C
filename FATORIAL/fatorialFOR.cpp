#include <stdio.h>
#include <stdlib.h>

int main () {
    int I,N;
    double FAT;
    printf("Digite um inteiro= ");
    scanf("%d",&N);
    if(N<0)
        printf("FATORIAL NAO EXISTE\n");
            else{ 
            FAT=1;
                for(I=2;I<=N;I++)
                FAT=FAT*I;
                printf("Fatorial= %e\n",FAT);
                }          
    system("pause");
    return 0;
}
