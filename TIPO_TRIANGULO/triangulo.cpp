#include <stdio.h>
#include <stdlib.h>


int main () {
    float A,B,C;
    printf("digite tres valores: ");
    scanf("%f %f %f", &A,&B,&C);
    if(A<B+C&&B<A+C&&C<A+B)
            if(A==B&&B==C)
            printf("equilatero\n");
            else if(A==B||A==C||B==C)
            printf("isoceles\n");
            else
            printf("escaleno\n");
    else 
    printf("não é um triangulo");
    system("pause");
    return 0;
}
