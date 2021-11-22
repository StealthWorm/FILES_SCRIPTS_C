#include <stdio.h>
#include <stdlib.h>

int main() {
     float vcompra;
     printf("Digite valor de compra: ");
     scanf("%f", &vcompra);
     if (vcompra < 10) {
         printf("Taxa de 70%\n"); //o primeiro printf desse if é facultativo,só como informação extra
         printf("Valor de Venda= %.2f\n",vcompra*1.7);// voce pode calcular a conta avulsa mas precisaria declarar uma var. para tal
      } else if (vcompra < 30) {
          printf("Taxa de 50%\n");
          printf("Valor de Venda= %.2f\n",vcompra*1.5);
       } else if (vcompra < 50) {
           printf("Taxa de 40%\n");
           printf("Valor de Venda= %.2f\n",vcompra*1.4);
        } else {
             printf("Taxa de 30%\n");
             printf("Valor de Venda= %.2f\n",vcompra*1.3);
       }
    system("pause");
    return 0;
}
//no ''printf'' voce pode colocar uma expressão direta (no caso vcompra*1.7), que ele calcula
