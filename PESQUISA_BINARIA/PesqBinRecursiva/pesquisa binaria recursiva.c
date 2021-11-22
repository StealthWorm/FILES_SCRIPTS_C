#include <stdio.h>
#include <stdlib.h>
#define M 10

int PBR(int v[],int I,int F,int VAL){
    int Meio;
    if(I>F)
    return -1;
    Meio=(I+F)/2;
    if(VAL==v[Meio])
    return Meio;
    if(VAL>v[Meio])
    return PBR(v,Meio+1,F,VAL);
    else
    return PBR(v,I,Meio-1,VAL);
}
int main(){
    int v[M]={10,40,45,80,87,89,90,112,150,155},X;
    printf("Digite um nome para ser procurado: \n");
    scanf("%d",&X);
    printf("local no vetor: %d\n",PBR(v,0,9,X));
system("pause");
return 0;
}
