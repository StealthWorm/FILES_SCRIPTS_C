#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 5
#define M 30

int main(){
    char v[T][M],aux[M];
    int i,j;
    for(i=0;i<T;i++){
    printf("Nome: ");
    gets(v[i]);
                    }
                    for(i=0;i<T-1;i++){
                        for(j=i+1;j<T;j++){
                            if(strcmpi(v[i],v[j])>0){
                               strcpy(aux,v[i]);
                               strcpy(v[i],v[j]);
                               strcpy(v[j],aux);

                                                    }
                                          }
                                       }
                                       for(i=0;i<T;i++)
                                        printf("%s\n",v[i]);
  system("pause");
  return 0;
}
