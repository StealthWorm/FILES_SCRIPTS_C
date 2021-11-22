#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define PI 3.14

/*Implemente uma função que calcule a área da superfície e o volume
de uma esfera de raio R. Essa função deve obedecer ao protótipo:
void calc_esfera(float R, float *area,float *volume)*/

void calc_esfera(float R, float *area,float *volume){

printf("AREA = %.1f\n",*area);
printf("VOLUME = %.1f\n",*volume);
}

int main(){
float R = 5,B,vol,are,*V,*A;

are = 4*PI*pow(R,2);
vol = 4/3*PI*pow(R,3);
A = &are;
V = &vol;

calc_esfera(R,A,V);// se vc tirar os asteriscos de V e A aqui, voce precisa colocar na função do void la em cima e vice versa

system("pause");
return 0;
}
