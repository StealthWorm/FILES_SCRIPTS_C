#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y=0,t;
    printf("Digite valores(0 para encerrar): " );
    scanf("%d",&x);
    while(x!=0){
        if(x%3==0 && x%5==0)
        y=y+x;
       scanf("%d",&x);
       t=y;
                }
        printf("Soma dos multiplos de 3 e 5= %d\n",t);
system("pause");
return 0;
}
        
