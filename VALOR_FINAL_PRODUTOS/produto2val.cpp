#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,i,prod;
    printf("Digite dois valores: ");
    scanf("%d %d",&a,&b);
    if(b<0){
        b=b*-1;
        a=a*-1;
            }
    i=0;
    prod=0;
    while(i<b){
        prod=prod+a;
        i++;
            }
        printf("prod= %d\n",prod);
    system("pause");
    return 0;
}
