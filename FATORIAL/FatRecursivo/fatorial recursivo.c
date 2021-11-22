x   #include <stdio.h>
#include <stdlib.h>

int Fat(int N){
    if(N==0)
    return 1;
    return N*Fat(N-1);
}
int main(){
int X;
printf("Digite um inteiro: ");
printf("\n\n");
scanf("%d",&X);
printf("%d\n\n",Fat(X));
system("pause");
return 0;
}
