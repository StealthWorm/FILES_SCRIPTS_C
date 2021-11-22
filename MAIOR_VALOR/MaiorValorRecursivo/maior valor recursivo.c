#include <stdio.h>
#include <stdlib.h>
#define  Tam 10


int MV(int v[],int N){
    int Ma;
    if(N==1)
      return v[0];
    Ma=MV(v, N-1);
    if(v[N-1]>Ma)
      return v[N-1];
    else
      return Ma;
}
int main(){
    int  x[Tam]={23,55,34,89,12,100,45,22,1,10};
    printf("Maior = %d\n",MV(x, Tam));
 system("pause");
 return 0;
}
