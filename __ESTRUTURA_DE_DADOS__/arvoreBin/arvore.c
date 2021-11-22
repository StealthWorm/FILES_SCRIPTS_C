#include <stdio.h>
#include <stdlib.h>


typedef struct arv
{
   int info;
   struct arv* esq;
   struct arv* dir;
}arvore;

void insere(arvore **r,int num);
void imprime_inordem(arvore *r);
void imprime_preordem(arvore *r);
void imprime_posordem(arvore *r);

main(){
    arvore *raiz;
    arvore *y;
    raiz = NULL;
   int num,x;
   num = 15;
   insere(&raiz,num);
   num = 10;
   insere(&raiz,num);
   num = 20;
   insere(&raiz,num);
   num = 50;
   insere(&raiz,num);
   num = 8;
   insere(&raiz,num);
   printf("\nImpressao preordem\n\n");
   imprime_preordem(raiz);
   printf("\n============================");
   printf("\nImpressao posordem\n\n");
   imprime_posordem(raiz);
   printf("\n============================");
   printf("\nImpressao inordem\n\n");
   imprime_inordem(raiz);
   printf("\n============================");
   x=altura(raiz);
   y=busca_elemento(raiz,77);
   printf("\n Tamanho da arvore = %d \n",x);
   if(y==NULL)
   printf("\n Elemento não encontrado \n",y);
   else
   printf("\n Elemento existe\n");
   system("pause");
   liberaArv(raiz);
   return 0;
}

void insere(arvore **r,int num){
   arvore *novo_no;
   novo_no = (arvore *)malloc(sizeof(arvore));
   if(*r == NULL) {    //verifica se a raiz da arvore esta vazia
       novo_no->info = num;
       novo_no->esq = NULL;
       novo_no->dir = NULL;
       *r = novo_no;
   }else{
       if((*r)->info < num){//verifica se é maior que a raiz
           insere(&(*r)->dir,num); // se maior que a raiz, insere no nodo direito.
       }else{
           insere(&(*r)->esq,num);  // se menor que a raiz, insere no nodo esquerdo.
       }
   }
}
void liberaArv(arvore *r){
    if(r==NULL)
        return;
     liberaArv(r->esq);
     liberaArv(r->dir);
     free(r);
     r= NULL;
}

void imprime_inordem(arvore *r){
   if(r!= NULL){
       imprime_inordem(r->esq);
       printf("%d\n", r->info);
       imprime_inordem(r->dir);
   }
}
void imprime_preordem(arvore *r){
   if(r!= NULL){
       printf("%d\n", r->info);
       imprime_inordem(r->esq);
       imprime_inordem(r->dir);
   }
}
void imprime_posordem(arvore *r){
   if(r!= NULL){
       imprime_inordem(r->esq);
       imprime_inordem(r->dir);
       printf("%d\n", r->info);
   }
}

int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int altura(arvore *r){
   if((r == NULL) || (r->esq == NULL && r->dir == NULL))
       return 0;
   else
       return 1 + maior(altura(r->esq), altura(r->dir));
}

int busca_elemento(arvore *r, int dado){
    while (r != NULL) {
        if (dado == r->info)
            return r->info;
        else if (dado < r->info)
            r = r->esq;
        else
            r = r->dir;
    }
    return 0;
}
