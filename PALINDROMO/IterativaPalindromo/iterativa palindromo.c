#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
    char p[100];
    int pal,i,j;
    setlocale(LC_ALL, "Portuguese");
    printf("Informe uma palavra ou frase: ");
    gets(p);
    j=strlen(p)-1;
    pal=1;
    i=0;
    while(i<j&&pal==1){
        if(p[i]!=p[j])
        pal=0;

        i++;
        j--;
                     }
    if(pal==1)
    printf("%s é um Palíndromo\n\n",p);
    else
    printf("%s não é um Palíndromo\n\n",p);

system("pause");
return 0;
}
