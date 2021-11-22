#include <stdio.h>
#include <stdlib.h>

int main(){
  int valor[10],i=0,v;
  printf("Digite valores do vetor: ");
  while(i<10){
    printf("valor %d\n",i);
    scanf("%d", &valor[i]);
    i++;  
        }
   i=0;
   printf("Valor a procurar: \n");
   scanf("%d",&v);
   if(v==valor[i])
   printf("posicao %d - valor %d",i,v);  
   else
   printf("Valor nao pertence ao vetor\n");   
    i++;
system("pause");
return 0;    
}
