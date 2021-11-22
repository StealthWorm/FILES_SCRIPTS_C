#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //para conseguir fazer acentuações, depois voce adiciona ''setlocale(LC_ALL,"Portuguese")''
int main(){
    int atual,ant1,ant2,i,n;
    setlocale(LC_ALL,"Portuguese");
    printf("Entre com termo de Fibonacci: ");
    scanf("%d", &n);
    if(n<=0) printf("Termo não existe\n");
    else{
        atual=ant1=ant2=1;
        i=2;
        while(i<n){
            atual=ant1+ant2;
            ant1=ant2;
            ant2=atual;
            i++;
        }
        printf("O %d termo de Fibonacci = %d\n", n,atual);
    }
system("pause");
return 0;
    
}
