#include <stdio.h>
#include <stdlib.h>
#define N 3

int main(){
    int A[N][N],aux=0,i,j;

         for(i=0;i<N;i++){
            for(j=0;j<N;j++){
            printf("A(%d %d): ",i,j);
                scanf("%d",&A[i][j]);
                            }
                         }
                         for(i=0;i<N;i++){
                            for(j=0;j<N;j++){
                                printf("%5d ",A[i][j]);

                                            }
                                         printf("\n");
                                         }
                                                                                  printf("\n\n");


                    for(i=0;i<N;i++){
                        for(j=0;j<N;j++){
                            aux=A[i][j];
                            A[i][j]=A[j][i];
                            A[j][i]=aux;
                                         }
                                    }
                                    for(i=0;i<N;i++){
                                        for(j=0;j<N;j++){
                                        printf("%5d ",A[j][i]);
                                                        }
                                                        printf("\n");
                                                     }


system("pause");
return 0 ;

}
