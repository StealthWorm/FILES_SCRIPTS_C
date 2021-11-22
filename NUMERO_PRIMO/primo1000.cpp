#include <stdio.h>
#include <stdlib.h>

int main() {
    int NUM,I,PRIM,x;
    printf("digite um valor: ");
    scanf("%d",&NUM);
    if(NUM<=0)
        printf("numero deve ser positivo\n");
        else{
            x=2;
            PRIM=1;
            I=NUM-1;
            while(x<=100&&I>=2&&PRIM==1){
                if(NUM%I==0)
                    x++;
                    PRIM=0;
                    I=I-1;
                    }
                    if(PRIM==1&&NUM!=1)
                    printf("primo\n");
                    else
                    printf("nao e primo\n");
                }   
system("pause");
return 0;             
}
