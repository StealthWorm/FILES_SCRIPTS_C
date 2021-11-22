#include <stdio.h>
#include <stdlib.h>
#include N 2
#include M 3
int main(){
    float M[N][M];
    int i,j;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++)
            scanf("%f",&M[i][j]);
                        }
        for(i=0;i<N;i++){
              for(j=0;j<N;j++)
              printf("M[%f][%f]",i,j);
                        }
 system("pause");
 return 0;   
}
