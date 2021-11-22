#include <stdio.h>
#include <stdlib.h>

int main() {
    int N,C,TAB;
    printf("Digite um valor: ");
    scanf("%d",&N);
    if(N==0)
        printf("0");
        else {TAB=0;
        while(TAB<=10){
            C=N*TAB;
            TAB++;
            printf("%d x %d = %d\n",N,TAB,C);
        }
        
    }
        system("pause");
        return 0;
}
