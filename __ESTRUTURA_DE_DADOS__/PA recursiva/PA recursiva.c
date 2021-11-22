#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    int a1,r,n=0,an,total;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite primeiro elemento , razão e até onde quer a PA: \n\n");
    scanf("%d %d %d",&a1,&r,&total);
    while(n!=total){
          n++;
        an=a1+(n-1)*r;

        printf("a%d = %d \n",n,an);
    }
system("pause");
return 0;
}
