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
            I=2;
                while(I<=N){
                FAT=FAT*I;
                I++;                    //(igual a ''I=I+1)
                            }
                printf("Fatorial= %e\n",FAT);
                }          
    system("pause");
    return 0;
}
