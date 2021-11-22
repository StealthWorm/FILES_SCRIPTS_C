#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* Implemente uma função que calcule as raízes de uma equação do
segundo grau do tipo Ax2 + Bx + C = 0. Lembrando que:
x = -b +- sqrt(pow(b,2)-4*a*c)/2*a
A variável A tem que ser diferente de zero.
• Se ∆ < 0 não existe real.
• Se ∆ = 0 existe uma raiz real.
• Se ∆ ≥ 0 existem duas raízes reais.
Essa função deve obedecer ao seguinte protótipo:

int raizes(float a,float b,float c, float *x1,float *x2)

Essa função deve ter como valor de retorno o número de raízes
reais e distintas da equação. Se existirem raízes reais, seus valores
devem ser armazenados nas variáveis apontadas por X1 e X2. */

int raizes(float a,float b,float c, float *x1,float *x2){
float delta;
delta = b*b - 4*a*c;

return delta;
}

int main(){
    float a, b, c, x1, x2,*J,*K,D;

    printf("Digite o valor do termo a: ");
    scanf("%f", &a);
    printf("Digite o valor do termo b: ");
    scanf("%f", &b);
    printf("Digite o valor do termo c: ");
    scanf("%f", &c);

    x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

    J = &x1;
    K = &x2;

    D = raizes(a,b,c,J,K);

    if(D < 0){
        printf("A equacao nao possui raizes reais\n");
    }else{
      if(D == 0){
           printf("O valor de x: %.2f\n", x1);
                       }else{
                        printf("O valor de x1: %.2f\n", x1);
                        printf("O valor de x2: %.2f\n", x2);
                            }
         }

    system("pause");
    return 0;
}
