#include <stdio.h>
#include <stdlib.h>
#define N 11 //uma constante,um valor fixo que no caso indicara o tamanho do vetor

int main(){
    int v[N],i,aux,j;
    for(i=0;i<N;i++){     
      printf("v[%d]: ",i);
      scanf("%d",&v[i]);
                    }
          i=0;
          j=N-1;           
          while(i<j){
               aux=v[i];
               v[i]=v[j];
               v[j]=aux; 
               i=i+1;
               j=j-1;   //mesmo que o programa seja de tamanho impar
                    }
    for(i=0;i<N;i++){
        printf("%d ", v[i]);
    }
system("pause");
return 0;    
}
