/*
URI Online Judge | 1080
Maior e Posição
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

Entrada

O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída

Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
2
113
45
34565
6
...
8
 
34565
4
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
	int repet, *pontNum=NULL;

	repet = 100;
	alocaRealloc(&pontNum, repet);
	//geraAleatorioInt(pontNum,repet);
	armazentaVetorInt(pontNum,repet);
	imprimiVet(pontNum, repet);
	system("PAUSE");

	return 0;
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
	int maior, posicao;
	maior = *pontNum;
	posicao = 1;
	for (int i = 0; i < tamanho-1; i++)
	{
		if (*(pontNum+i)<*(pontNum+i+1)&& maior<*(pontNum+i+1))
		{
			maior = *(pontNum+i+1);
			posicao = i;
		}
	}
	for (int i = 0; i < tamanho; i++)
	{
		printf("%i\n", *(pontNum+i));
	}
	printf("\n%i\n%i\n", maior, posicao);
}

void alocaRealloc(int **pontNum, int tamanho)
{
	if ((*pontNum=(int*)realloc(*pontNum, tamanho*sizeof(int)))==NULL)
		exit(1);
}

int armazenaInt()
{
	int valor;
	scanf("%i",&valor);
	fflush(stdin);

	return valor;
}