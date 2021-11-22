#include <stdio.h>
#include <stdlib.h>

int main(){
    int v,n;
    float f;
    printf("Digite um inteiro positivo: ");
    scanf("%d",&v);
    f=0;
    n=1;
    while(n!=v){
          f=f+1/n;
          n++;
                }
                printf("result das somas: %f",f);
system("pause");
return 0;
    
{
