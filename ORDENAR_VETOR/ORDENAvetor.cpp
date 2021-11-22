#include <stdio.h>
#include <stdlib.h>
#define N 5 //uma constante,um valor fixo que no caso indicara o tamanho do vetor

int main(){
    int v[N],i,aux,j;
    //comando para ler vetor
    for(i=0;i<N;i++){      //em pseudo:para i de 0 até N-1 passo 1
      printf("v[%d]: ",i);
      scanf("%d",&v[i]);  
    } 
    //  comando em si,para ordenar (ordem crescente)
    for(i=0;i<N-1;i++){ //para i de 0 até N-2 passo 1
        for(j=i+1;j<N;j++){// para j de i+1 até N-1 passo 1
            
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                         }
                        }
                      }
    //comando para mostrar vetor
    for(i=0;i<N;i++){
        printf("%d ", v[i]);
    }
system("pause");
return 0;    
}

