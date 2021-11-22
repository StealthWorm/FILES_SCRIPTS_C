#include <stdio.h>
#include <stdlib.h>

int FIBO(int N){
    if(N==0)
    return 0;
    if(N==1||N==2)
    return 1;
    return FIBO(N-1)+FIBO(N-2);
}
int main(){
    int X;
    printf("Digite um inteiro: ");
    printf("\n\n");
    scanf("%d",&X);
    printf("%d\n\n",FIBO(X));
system("pause");
return 0;
}
