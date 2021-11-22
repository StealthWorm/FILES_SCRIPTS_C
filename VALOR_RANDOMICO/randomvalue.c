#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
//exemplo funções rand() e srand()

int main(){
    int v[N],i;

    srand(time(NULL)); //vc pode usar numeros fixos, mas o time null usa a hora do proprio pc pra aleatorizar os valores
    for(i=0;i<N;i++)
    v[i] = rand() % 1000;

    //mostrando o vetor
    for(i=0;i<N;i++)
    printf("%d \n",v[i]);
system("pause");
return 0;
}
