#include <stdio.h>
#include <stdlib.h>
#define TAM 35000

struct no {
	struct no *key[27];
	struct no *father;
	int kids;
};

typedef struct no node;

/* Inicialização */
node *Trie();

/* Tratar a árvore */
int insert(node *T, char *word);
int find(node *T, char *word);
int delete(node *T, char *word);
node *get(node *T, char *word);

node *Trie(){
	node *T;
	int i;

	if (!(T = malloc(sizeof(node)))){
		return NULL;
	}

	T->father = NULL;

	for (i = 0; i < 27; i++){
		T->key[i] = NULL;
	}

	T->kids = 0;

	return T;
}

/* Insere um novo elemento na árvore */
int insert(node *T, char *word){
	int i, pos;
	node *aux, *pointer;

	pointer = T;

	for (i = 0; word[i] != '\0'; i++){
		pos = word[i] - 'a';
		if (pointer->key[pos]){
			pointer = pointer->key[pos];
		} else {
			aux = Trie();
			if (!aux) {
				return 0;
			}
			pointer->key[pos] = aux;
			aux->father = pointer;
			pointer->kids++;
			pointer = aux;
		}
	}

	if (!pointer->key[26]){
		pointer->key[26] = (node *) 1;
		pointer->kids++;
	}

	return 1;

}
/* Função auxiliar
 * Acha o final da palavram
 * É utilizada tanto para a função find como para a função delete */
node *get(node *T, char *word){
	int i, pos;
	node *pointer;

	i = 0;

	pointer = T;
	if (word[i] == '\0'){
		return NULL;
	} else {
		while((word[i] != '\0') && (pointer)){
			pos = word[i] - 'a';
			pointer = pointer->key[pos];
			i++;
		}
	}

	return pointer;
}

/* Localiza um elemento na árvore */
int find(node *T, char *word){
	node *aux;
    int i;
	aux = get(T, word);
	if ((aux) && (aux->key[26])){
		return 1;
	}

	return 0;
}

/* Remove um elemento da árvore */
int delete(node *T, char *word){
	int i;
	node *aux, *father;

	aux = get(T, word);

	if (aux && aux->key[26]){
		aux->key[26] = NULL;
		aux->kids--;

		while (aux->father && (!aux->kids)){
			father = aux->father;
			i = 0;

			while((father->key[i] != aux) && (i < 26)){
				i++;
			}

			father->key[i] = NULL;
			father->kids--;

			if (aux->father){
				free(aux);
			}

			aux = father;
		}

	} else {
		return 0;
	}
	return 1;
}

int main(){
	unsigned long int i;
	node *raiz;
	char aux, op, sel, *palavra;

	raiz = Trie();

	scanf("%c", &sel);

	while(sel != '@'){
		if ((sel == 'b') || (sel == 'i') || (sel == 'r')){
			scanf("%c", &aux);

			if (!(palavra = malloc(sizeof(char)*(TAM + 1)))){
				printf("Falha a alocar memória.\n");
				exit(1);
			}

			scanf("%c", &aux);
			i = 0;
			while((aux != '\n')){
				palavra[i] = aux;
				i++;
				scanf("%c", &aux);
			}

			palavra[i] = '\0';

			op = 1;

			switch(sel){
				case 'b':
                op = find(raiz, palavra);
					break;
				case 'i': op = insert(raiz, palavra);
					break;
				case 'r': op = delete(raiz, palavra);
					break;
			}

			free(palavra);

			if (op){
				printf("v");
			} else {
				printf("f");
			}

			printf("\n");
		}

		scanf("%c", &sel);
	}

	return 0;
}
