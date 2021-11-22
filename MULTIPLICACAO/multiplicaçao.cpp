#include <stdio.h>
#include <stdlib.h>

int main () {
    int A,B,R,S;
    printf("Escreva dois valores para multiplicar: ");
        scanf("%d %d",&A,&B);
        R=A*B;
        if(R==0)
        printf("0");
            
            else{
            S=0  
            if(R%2==0){      
            while(S<=R){
            S=S+2;
                   }
                printf("Resultado= %d",S);           
                     }
                }  
                else{while(S<=R){
                S=S+1;}
                printf("Resultado= %d",S);
            }
system("pause");
return 0;              
}
