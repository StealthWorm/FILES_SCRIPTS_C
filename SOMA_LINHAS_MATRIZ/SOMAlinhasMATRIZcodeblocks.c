#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 4

int main(){
    float A[N][M],v[N];
    int i,j;
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                printf("A(%d %d): ",i,j);
                scanf("%f",&A[i][j]);
                            }
                        }
                         printf("\n");
                         for(i=0;i<N;i++){
                            v[i]=0;
                             for(j=0;j<M;j++){
                                 v[i]=v[i]+A[i][j];
                                             }
                                         }
           for(i=0;i<N;i++)
               printf("%.1f ",v[i]);
system("pause");
return 0;
}
