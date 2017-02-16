/*
URI Online Judge | 1115
Quadrante
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).

Entrada

A entrada contém vários casos de teste. Cada caso de teste contém 2 valores inteiros.

Saída

Para cada caso de teste mostre em qual quadrante do sistema cartesiano se encontra a coordenada lida, conforme o exemplo.

Exemplo de Entrada	Exemplo de Saída
2 2
3 -2
-8 -1
-7 1
0 2
primeiro
quarto
terceiro
segundo
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int armazenaInt();

void geraAleatorioInt(int *pontNum, int tamanho);
void armazentaVetorInt(int *pontNum, int tamanho);

void imprimiVet(int *pontNum, int tamanho);	
void alocaRealloc(int **pontNum, int tamanho);
void teste();

int main()
{
	int repet, *pontNum=NULL, cond=0;

	do{
		repet = 2;
		alocaRealloc(&pontNum, repet);
		//geraAleatorioInt(pontNum,repet);
		armazentaVetorInt(pontNum,repet);
		if (*(pontNum)==0 || *(pontNum+1)==0)
		{
			cond=1;
			break;
		}
		imprimiVet(pontNum, repet);
	
	} while (cond!=1);
	system("PAUSE");

	return 0;
}

int armazenaInt()
{
	int valor;
	scanf("%i",&valor);
	fflush(stdin);

	return valor;
}

void geraAleatorioInt(int *pontNum, int tamanho)
{
	int valor;
	srand(time(NULL));
	for (int i = 0; i < tamanho; i++)
		*(pontNum+i) = rand() % 100;
}

void armazentaVetorInt(int *pontNum, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
		*(pontNum+i) = armazenaInt();
}

void teste()
{
	printf("teste\n");
	system("PAUSE");
} 

void imprimiVet(int *pontNum, int tamanho)
{
	int caso;
	printf("%i\t%i\n", *pontNum, *(pontNum+1));
	if (*pontNum>0)
		caso=2;
	if (*pontNum<0)
		caso=-2;
	if (*(pontNum+1)>0)
		caso++;
	if (*(pontNum+1)<0)		
		caso--;

	switch (caso){
		case 3:
			printf("primeiro\n");
			break;

		case 1:
			printf("quarto\n");
			break;

		case -1:
			printf("segundo\n");
			break;

		case -3:
			printf("terceiro\n");
			break;
	}	
	
}

void alocaRealloc(int **pontNum, int tamanho)
{
	if ((*pontNum=(int*)realloc(*pontNum, tamanho*sizeof(int)))==NULL)
		exit(1);
}