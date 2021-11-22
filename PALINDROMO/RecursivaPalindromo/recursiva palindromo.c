#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int palindromo(char pal[], int tam, int ini) {
    if (tam == 0){
        return 0;
    }
    if(ini == tam){
        return 1;
    }

    if (pal[ini] == pal[tam])
         return palindromo(pal, tam-1, ini+1);
      else
         return -1;
}

int main() {
   char palavra[100];
   int n;
   setlocale(LC_ALL, "Portuguese");
   printf ("Informe a palavra: ");
   gets(palavra);

   n = strlen(palavra)-1;
   if (palindromo(palavra, n, 0)==1)
      printf("\n %s é palíndromo\n",palavra);
   else
      printf("\n %s não é palíndromo\n",palavra);
   return 0;
}
