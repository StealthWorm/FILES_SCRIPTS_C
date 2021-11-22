#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float ALTURA,PESO,IMC;
    printf("Entre com Altura e Peso: ");
    scanf("%f %f ", &ALTURA, &PESO);
    IMC=PESO/pow(ALTURA,2);
    if (IMC<=20)
        printf("Abaixo do Peso\n");
      else if (IMC<=25)
                printf("Peso Normal\n");
         else if (IMC<=30)
                printf("Sobrepeso\n");
            else if (IMC<=40)
                printf("Obeso\n");
              else printf("Obeso Morbido\n");
    system("pause");
    return 0;
}
