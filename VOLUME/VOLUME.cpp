#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14 // se voce nao quiser incluir  essa tag voce simplesmente coloca o 3.14 na conta direto

int main()  {
    float R,Volume;
        printf("Escreva valor para raio: ");
        scanf("%f", &R);
    Volume=4/3*PI*pow(R,3); //voce pode colocar ''4.0'' para nao negar as casas apos a virgula,como em 5/2,onde o resultado daria 2
        printf("Volume= %.2f\n", Volume);
    system ("pause");
    return 0;
}
