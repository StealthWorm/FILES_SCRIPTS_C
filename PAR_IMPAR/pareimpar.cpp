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
    
    
    
    //o 'if'' possui suas proprias chves e o else também,não se misturam
    //não existe 'else' sem 'if', mas o contrário é possivel
}
