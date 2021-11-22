#include <stdio.h>
#include <stdlib.h>
#define M 10

int Binaria(int vet[], int chave, int Tam)
{
     int inf = 0;
     int sup = Tam-1;
     int meio;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (chave == vet[meio])
               return meio;
          if (chave < vet[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;
}

int main(){
    int v[M]={10,40,45,80,87,89,90,112,150,155},X;
    printf("Digite um nome para ser procurado: \n");
    scanf("%d",&X);
    printf("local no vetor: %d\n",Binaria(v,X,M));
system("pause");
return 0;
}
