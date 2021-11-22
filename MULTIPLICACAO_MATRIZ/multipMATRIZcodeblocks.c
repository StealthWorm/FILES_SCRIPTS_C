#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 2
#define P 3

int main(){
    float A[N][M],B[M][P],C[N][P];
    int i,j,k;
        for(i=0;i<N;i++)
            for(j=0;j<M;j++){
                printf("A(%d %d): ",i,j);
                scanf("%f",&A[i][j]);
                            }
                         printf("\n");
                         for(i=0;i<M;i++)
                             for(j=0;j<P;j++){
                                 printf("B(%d %d): ",i,j);
                                 scanf("%f",&B[i][j]);
                                             }
                         for(i=0;i<N;i++)
                             for(j=0;j<P;j++){
                                  C[i][j]=0;
                                  for(k=0;k<M;k++){
                                      C[i][j]=C[i][j]+ A[i][k]*B[k][j];
                                                  }
                                              }
           for(i=0;i<N;i++){
               for(j=0;j<P;j++)
               printf("%5.1f ",C[i][j]); // o 5 ao lado do percento é para reservar espaços na matriz,deixando-a uniforme em tamanho
                printf("\n");
                            }

system("pause");
return 0;
}
