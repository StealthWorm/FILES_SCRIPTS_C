#include <stdio.h>
#include <stdlib.h>

int main() {
    float A,B,C;
    printf("Digite tres valores: ");
    scanf(" %f %f %f", &A,&B,&C);
    if (A>B && A>C)
          printf("Maior = %.2f\n",A);
      else if (B>C) 
          printf("Maior = %.2f\n",B);
      else printf("Maior = %.2f\n",C);
    system("pause");
    return 0;
}
