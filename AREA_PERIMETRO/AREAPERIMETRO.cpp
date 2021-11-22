#include <stdio.h>
#include <stdlib.h>

int main()  {
    float b,h,A,P;
    printf("Entre com base e altura: ");
    scanf("%f %f",&b,&h);
    A=b*h;
    P=2*b+2*h;
    printf("Perimetro=%.2f Area=%.2f\n",P,A);
    system ("pause");
    return 0;
    //%.2F USADO PARA INDICAR ATÉ 2 CASAS DEPOIS DA VIRGULA
}
