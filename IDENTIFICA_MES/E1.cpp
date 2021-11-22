#include <stdio.h>
#include <stdlib.h>

int main(){
    int v;
    printf("Informe um valor de 1 a 12: ");
    scanf("%d",&v);
    if(v==1)
        printf("mes %d - Janeiro\n",v);
         else if(v==2)
        printf("mes %d - Fevereiro\n",v);
         else if(v==3)
        printf("mes %d - Marco\n",v);
         else if(v==4)
        printf("mes %d - Abril\n",v);
         else if(v==5)
        printf("mes %d - Maio\n",v);
         else if(v==6)
        printf("mes %d - Junho\n",v);
         else if(v==7)
        printf("mes %d - Julho\n",v);
         else if(v==8)
        printf("mes %d - Agosto\n",v);
         else if(v==9)
        printf("mes %d - Setembro\n",v);
         else if(v==10)
        printf("mes %d - Outubro\n",v);
         else if(v==11)
        printf("mes %d - Novembro\n",v);
         else if(v==12)
        printf("mes %d - Dezembro\n",v);
            else printf("Valor incorreto\n");
        
system("pause");
return 0;        
    
}
