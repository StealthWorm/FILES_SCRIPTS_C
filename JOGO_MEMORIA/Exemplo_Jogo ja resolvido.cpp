#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#define N 5
#define M 4
#define L 10
char TAB[N][M];
char TAB_mostrar[N][M];
char FIG[L]={'a','b','c','d','e','f','g','h','i','j'};

//Protótipos

void inicializacao();
void embaralhar();
void mostrar();
void tabela();
void jogabilidade();

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, j, a, b;
	char menu;

 printf(" Iniciar 1\n");

	printf("fechar 9\n");

	scanf("%c", &menu);

	inicializacao();

	embaralhar();


	switch(menu){
	case '1':
	mostrar();
	jogabilidade();
	break;
	case '9':system("exit");
	default:
 printf("operacao incorreta \n");
 system("cls");
 break;
	}
	system("cls");
	system("pause");
	return 0;
}

void inicializacao(){
	int a, b,x=0;
	for(a=0; a<N; a++)
	for(b=0; b<M; b++){
	TAB[a][b]=FIG[x];
	if(x<9) x++;
	else x=0;
	}
}

void embaralhar(){
	int i,j,x,y;
	char aux;
	srand(time(NULL));
	for(i=0;i<N;i++)
	for(j=0;j<M;j++){
	x=rand()%N;
	y=rand()%M;
	aux=TAB[i][j];
	TAB[i][j]=TAB[x][y];
	TAB[x][y]=aux;
	}
}

void tabela(){
 int i, j;
 for(i=0; i<N; i++){
 for(j=0; j<M; j++)
 printf("%5.1c ", TAB[i][j]);
	printf("\n");};
	printf("\n\n");
}

void mostrar(){
	int i, j;
	for(i=0;i<N;i++){
	for(j=0;j<M;j++){
	TAB_mostrar[i][j]=('?');
	printf("%5.1c ", TAB_mostrar[i][j]);}
	printf("\n");};
	printf("\n\n");
}

void jogabilidade(){
 int x, y, a, b, cont=0, i, j, t=10;
 char card1, card2;
 while(cont<t){
 printf ("escolha a primeira posição (linha coluna) - separe por espaço \n) ");
 scanf ("%d %d", &x, &y);

 if (x>N || y>M){
 printf("cordenada errada\n");
 printf ("escolha a primeira posição (linha coluna) - separe por espaço \n) ");
 scanf ("%d %d", &x, &y);
 }
 card1=TAB[x][y];
 for(i=0;i<N;i++){
 for(j=0;j<M;j++){
 TAB_mostrar[x][y]=card1;
 printf("%5.1c ", TAB_mostrar[i][j]);}
 printf("\n");}
 printf("\n\n");




 printf ("escolha a segunda posição (linha coluna) - separe por espaço \n");
 scanf ("%d %d", &a, &b);
 if (x==a && y==b){
 printf("as coordenadas são iguais\n");
 printf ("escolha a segunda posição (linha coluna) - separe por espaço \n");
 scanf ("%d %d", &a, &b);
 }
 if (a>N || b>M){
 printf("cordenada errada\n");
 printf ("escolha a segunda posição (linha coluna) - separe por espaço \n");
 scanf ("%d %d", &a, &b);
 }
 card2=TAB[a][b];
 for(i=0;i<N;i++){
 for(j=0;j<M;j++){
 TAB_mostrar[a][b]=card2;
 printf("%5.1c ", TAB_mostrar[i][j]);
 }
 printf("\n");
 }
 printf("\n\n");
 Sleep(3000);

 if (card1==card2){
 printf("Voce encontrou um par\n\n");
 cont++;
 }

 else{printf("não é um par\n\n");
 TAB_mostrar[x][y]='?';
 TAB_mostrar[a][b]='?';
 }
 Sleep(1000);
 system("cls");
 for(i=0;i<N;i++){
 for(j=0;j<M;j++){
 printf("%5.1c ", TAB_mostrar[i][j]);}
	printf("\n");};
 printf("\n\n");
 }

 printf("conseguiu miserável\n");
 system("pause");

}
