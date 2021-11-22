#include <stdio.h>
#include <stdlib.h>

int main () {
    float Massa,N,PESO;
    printf("digite sua Massa e um número de 1 a 6: ");
	scanf("%f %f",&Massa,&N);
    if(N==1){
        PESO=Massa*0.37;
        printf("PESO=%.2f\n",PESO);
        printf("MERCURIO\n");
            }else{if(N==2){
            PESO=Massa*0.88;
         	printf("PESO=%.2f\n",PESO);
            printf("VENUS\n");
               			 }else{if(N==3){	
                		 PESO=Massa*0.38;
                		 printf("PESO=%.2f\n",PESO);
               			 printf("MARTE\n");
                    		 		   }else{if(N==4){
                    				   PESO=Massa*2.64;
                    			 	   printf("PESO=%.2f\n",PESO);
                    			   		printf("JUPITER\n");
                            						}else{if(N==5){
                             						PESO=Massa*1.15;
                              						printf("PESO=%.2f\n",PESO);
                               						printf("SATURNO\n");
                                    							  }else{ 
                                    							  PESO=Massa*1.17;
                                    							  printf("PESO=%.2f\n",PESO);
                                    							  printf("URANO\n");
                                     									}
                                    					}
                                			}
                             }
                 }
                    
  system("pause");
  return 0;                  
                        
}

//o "}else{" possui suas proprias chaves,entao mesmo que possua outro ''if'' em seguida voce coloca mais uma chave (else{if(valor){"
