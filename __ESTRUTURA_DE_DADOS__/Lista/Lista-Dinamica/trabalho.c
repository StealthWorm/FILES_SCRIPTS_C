		#include"trabalho.h"
		int k=0;
		//******************************
		//*****OPERAÇÕES LISTA********
		//******************************
		struct Lista* init(){//Inicia uma Lista
			struct Lista *lista ;
			lista = (struct Lista*) malloc(sizeof(struct Lista));
			if(lista==NULL){
				printf("Lista não foi incializada");
				return;
			}
			lista->inicio=NULL;
			lista->final=NULL;
			lista->qtd=0;
			return lista;
		}
		void listarLista(struct Lista* li){
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			struct ElemLista* aux ;
			aux = li->inicio;
			int i;
			i=0;
			printf("=====================================\n");
			while(i<li->qtd){
			listarPilha(&(aux->a));
			aux=aux->next;
			i++;
			}
			printf("=====================================\n");
		}
		 void inserirInicio(struct Lista *li,struct Pilha *pi){//insere no inicio da lista
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			if(pi==NULL){
				printf("Pilha não foi inicicializada\n");
				return;
			}
			struct ElemLista *temp;
			temp = (struct ElemLista*) malloc(sizeof(struct ElemLista));
			temp->a=*pi;
			
			if(li->inicio==NULL){
				li->final=(struct ElemLista*)temp;
			}else{
				temp->next=(struct ElemLista*)li->inicio;
			}
			li->inicio=(struct ElemLista*)temp;
			(li->qtd)++;
			printf("Adicionado\n");
		 }
		 struct ElemLista* removerInicio(struct Lista *li){
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			if(li->inicio==NULL){
				printf("Underflow\n");
				return;
			}
			struct ElemLista *temp;
			temp = (struct ElemLista*) malloc(sizeof(struct ElemLista));
			temp->a=li->inicio->a;
			li->inicio=li->inicio->next;
			(li->qtd)--;
			printf("Removido\n");
			return temp;
			
		}
		 void inserirMeio(struct Lista *li,struct Pilha *pi,int pos){
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			if(pi==NULL){
				printf("Pilha não foi inicicializada\n");
				return;
			}
			if(li->inicio==NULL){
				printf("Nao existe nenhum elemento na lista\n");
				return;
			}
			
			struct ElemLista* aux;
			aux = li->inicio;
			
			int i;
			i=0;
			while(i<((li->qtd)-1) && aux->a.id!=pos){
			aux=aux->next;
			i++;
			}
			if(aux->a.id!=pos){
				printf("Nao encontramos nenhum elemento com esse id, nao adicionamos seu elemento\n");
				return;
			}else{
				struct ElemLista *temp;
				temp = (struct ElemLista*) malloc(sizeof(struct ElemLista));
				temp->a=*pi;
				temp->next=aux->next;
				aux->next=temp;
			}
			(li->qtd)++;
			printf("Adicionado\n");
		 }
		 struct ElemLista* removerMeio(struct Lista *li,int id){
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			if(li->final==NULL){
				printf("Underflow\n");
				return;
			}
			
			struct ElemLista *aux, *aux1 ;
			aux = li->inicio;
			int i;
			i=0;
			
			while(i<li->qtd && aux->a.id!=id){
			aux1=aux;
			aux=aux->next;
			i++;
			}
			if(i==li->qtd){
				printf("Nao encontramos seu elemento\n");
			}else{
				
				
				if(i==0) 
					removerInicio(li);
				else if(aux->a.id==id){
					aux1->next=aux->next;	
					(li->qtd)--;
					printf("Removido\n");
				}else 
					if(i==(li->qtd)-1) removerFinal(li);
			struct ElemLista *temp;
			temp = (struct ElemLista*) malloc(sizeof(struct ElemLista));
			temp->a=aux->a;
			return temp;	
			}
	
			

		}
		 void inserirFinal(struct Lista *li,struct Pilha *pi){
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			} 	
			if(pi==NULL){
				printf("Pilha não foi inicicializada\n");
				return;
			}
			
			struct ElemLista *temp;
			temp = (struct ElemLista*) malloc(sizeof(struct ElemLista));
			temp->a=*pi;
			
			if(li->final==NULL){
				li->inicio=(struct ElemLista*)temp;
			}else{
				(li->final->next)=temp;	
			}
			
			li->final=(struct ElemLista*)temp;
			(li->qtd)++;
			
			printf("Adicionado\n");
		 }
		struct ElemLista* removerFinal(struct Lista *li){
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			if(li->final==NULL){
				printf("Underflow\n");
				return;
			}
			struct ElemLista *temp;
			temp = (struct ElemLista*) malloc(sizeof(struct ElemLista));
			temp->a=li->final->a;
			
			struct ElemLista* aux ;
			aux = li->inicio;
			int i;
			i=0;
			while(i<(li->qtd)-1){
			aux=aux->next;
			i++;
			}
			aux->next=NULL;
			li->final=aux;
			(li->qtd)--;
			printf("Removido\n");
			return temp;
			
		}
		void excluirLista(struct Lista* li){//Exclui uma Lista
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			li->final=NULL;
			li->inicio=NULL;
			li->qtd=0;
			free(li);
		}
		void inserirMetade(struct Lista *li,struct Pilha *pi){
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			if(pi==NULL){
				printf("Pilha não foi inicicializada\n");
				return;
			}
			struct ElemLista *temp;
			temp = (struct ElemLista*) malloc(sizeof(struct ElemLista));
			temp->a=*pi;
			
			if(li->inicio==NULL){
				li->inicio=(struct ElemLista*)temp;				
			}else{
				struct ElemLista* aux;
				aux = li->inicio;
				int i,j;
				i=0;
				j=((li->qtd)/2)-1;
				while(i<(((li->qtd)/2)-1)){
						aux=aux->next;
						i++;
				}
				temp->next=aux->next;
				aux->next=temp;
			}
			(li->qtd)++;
			printf("Adicionado\n");
		}
		void removerMetade(struct Lista *li){
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			struct ElemLista *temp;
			temp = (struct ElemLista*) malloc(sizeof(struct ElemLista));
			if(li->inicio==NULL){
				temp->a=li->inicio->a;
				li->inicio=NULL;				
			}else{
				struct ElemLista* aux;
				aux = li->inicio;
				int i,j;
				i=0;
				j=(((li->qtd)/2)-1);
				while(i<(((li->qtd)/2))-1){
						aux=aux->next;
						i++;
				}
				aux->next=aux->next->next;
			}
			(li->qtd)--;
			printf("Removido\n");
		}
		//******************************
		//*****FIM - OPERAÇÕES LISTA****
		//******************************
		
		//******************************
		//*****OPERAÇÕES PILHA********
		//******************************
		struct Pilha* initPilha(){//Inicia uma pilha
			struct Pilha *pilha;
			pilha = (struct Pilha*) malloc(sizeof(struct Pilha));
			if(pilha==NULL){
				printf("Pilha não foi inicicializada\n");
				return;
			}
			pilha->id=k;
			pilha->inicio=NULL;
			pilha->qtd=0;
			k++;
			return pilha;
		}
		void excluirPilha(struct Pilha* pi){//exclui uma pilha
			if(pi==NULL){
				printf("Pilha não foi inicicializada\n");
				return;
			}
			pi->inicio=NULL;
			pi->qtd=0;
			free(pi);
		}
		void listarPilha(struct Pilha* pi){//lista elementos da pilha
			if(pi==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			struct Elemento* aux ;
			aux = pi->inicio;
			int i;
			i=0;
		
			printf("=======");
			printf("Id da pilha:%d",pi->id);
			printf("=======\n");
			while(i<pi->qtd){
				printf("%d: ",aux->a.id);
				printf("%s\n",aux->a.nome);
				aux=aux->next;
				i++;
			}
		}
		void push(struct Pilha* pi,struct Aluno novo){//insere um elemento na Pilha
			if(pi==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			struct Elemento *temp;
			temp = (struct Elemento*) malloc(sizeof(struct Elemento));
			temp->a=novo;
			
			if(pi->inicio==NULL){
				pi->inicio=temp;
			}else{
				temp->next=pi->inicio;
			}
			pi->inicio=temp;
			(pi->qtd)++;
			printf("Adicionado\n");
			
		}
		struct Elemento* pop(struct Pilha* pi){//retira um elemento da pilha
			if(pi==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			if((pi->qtd)==0){
				printf("Underflow\n");
				return NULL;
			}
			
			struct Elemento *temp;
			temp = (struct Elemento*) malloc(sizeof(struct Elemento));
			temp->a=pi->inicio->a;
			temp->next=pi->inicio;
			
			pi->inicio=pi->inicio->next;
			(pi->qtd)--;
			printf("Retirado\n");
			return temp;
		} 
		//******************************
		//*****FIM - OPERAÇÕES PILHA****
		//******************************
	
		//******************************************
		//*****OPERAÇÕES PILHA-ELEMENTO DA LISTA****
		//******************************************
		void pushElemLista(struct Lista* li,struct Aluno novo,int id){//insere um elemento na Pilha dentro da lista
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			struct ElemLista *aux, *aux1 ;
			aux = li->inicio;
			int i;
			i=0;
			
			while(i<li->qtd && aux->a.id!=id){
			aux1=aux;
			aux=aux->next;
			i++;
			}
			if(i==(li->qtd)){
				printf("Nao encontramos seu elemento\n");
				return;
			}
				
			struct Elemento *temp;
			temp = (struct Elemento*) malloc(sizeof(struct Elemento));
			temp->a=novo;
			
			if(aux->a.inicio==NULL){
				aux->a.inicio=temp;
			}else{
				temp->next=aux->a.inicio;
			}
			aux->a.inicio=temp;
			(aux->a.qtd)++;
			printf("Adicionado\n");
			
		}
		
		struct Elemento* popElemLista(struct Lista* li,int id){//retira um elemento da pilha
			if(li==NULL){
				printf("Lista não foi inicicializada\n");
				return;
			}
			
			struct ElemLista *aux, *aux1 ;
			aux = li->inicio;
			int i;
			i=0;
			
			while(i<li->qtd && aux->a.id!=id){
			aux1=aux;
			aux=aux->next;
			i++;
			}
			if((aux->a.qtd)==0){
				printf("Underflow\n");
				return;
			}
			
			if(i==(li->qtd)){
				printf("Nao encontramos seu elemento\n");
				return;
			}else{
			
				
			
			struct Elemento *temp;
			temp = (struct Elemento*) malloc(sizeof(struct Elemento));
			temp->a=aux->a.inicio->a;
			temp->next=aux->a.inicio;
			
			aux->a.inicio=aux->a.inicio->next;
			(aux->a.qtd)--;
			printf("Retirado\n");
			return temp;
		}
		}
			
		//***********************************************
		//*****FIM - OPERAÇÕES PILHA-ELEMENTO DA LISTA****
		//************************************************
