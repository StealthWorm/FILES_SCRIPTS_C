#include <stdio.h>
#include <stdlib.h>
int main() {
    int Num;
        printf("Informe um inteiro: ");
        scanf("%d", &Num); // '%d' para inteiros
    if (Num%2==0)
        printf("Par\n");
    else
        printf("Impar\n");
        system ("pause");
        return 0;
    
    
    
    //o 'if'' possui suas proprias chves e o else tamb�m,n�o se misturam
    //n�o existe 'else' sem 'if', mas o contr�rio � possivel
}
