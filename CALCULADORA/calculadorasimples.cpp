#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    float a,b,r;
    char op,opcao;
    setlocale(LC_ALL,"Portuguese");
    do{
    printf("Digite opera��o: ");
    scanf("%f %c %f",&a,&op,&b);
    switch (op){
        case '+': r=a+b;
                printf("%.1f + %.1f = %.1f\n",a,b,r);
                break;  //se vc nao colocar o 'break', ele conta como ''ou'', e executa as duas opera��es ao mesmo tempo
                 case '-': r=a-b;
                        printf("%.1f - %.1f = %.1f\n",a,b,r);
                        break;
                         case '*': r=a*b;
                                printf("%.1f * %.1f = %.1f\n",a,b,r);
                                break;
                                     case '/': r=a/b;
                                            printf("%.1f / %.1f = %.1f\n",a,b,r);
                                            break;
                                                default: printf("Operador incorreto\n");                                 
                } 
                printf("Deseja continuar (y/n) ?\n: ");
                fflush(stdin); 			/*para limpar o buffer do teclado,pois se ele ja tiver uma var. ele nao l� o  proximo ''scanf'' sob a mesma condi�ao..ele ignora,entao essa op�ao 'limpa'
          							o espa�o para que leia o scanf que foi pulado*/
                scanf("%c",&opcao);     
    }while(opcao=='Y' || opcao=='y');
system("pause");
return 0; 
}
