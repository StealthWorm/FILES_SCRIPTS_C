#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d",&x,&y);
    if(x==0&&y==0)
        printf("MDC indeterminado\n");
            else if(x==0)
            printf("MDC=%d\n",y);
            else if(y==0)
            printf("MDC=%d\n",x);
                else{
                    while(x!=y){
                    if(x>y)
                    x=x-y;
                    else 
                    y=y-x;
                        
                        }
                        printf("MDC=%d\n",x);
                    }
        system("pause");
        return 0;
            }
                        
