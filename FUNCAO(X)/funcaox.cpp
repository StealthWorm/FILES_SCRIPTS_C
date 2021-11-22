#include <stdio.h>
#include <stdlib.h>


int main () {
    float x,f;
    printf("digite valor de x: ");
    scanf("%f",&x);
	f=8/(x-2);
    printf("f(x)=%.2f\n",f);
    if(x==2)
    printf("f(x) não existe!\n");
    system("pause");
    return 0;
}
