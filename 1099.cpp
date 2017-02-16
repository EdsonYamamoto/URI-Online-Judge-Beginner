/*
URI Online Judge | 1099
Soma de Ímpares Consecutivos II
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma de todos os ímpares existentes entre X e Y.

Entrada

A primeira linha de entrada é um inteiro N que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros X e Y.

Saída

Imprima a soma de todos valores ímpares entre X e Y.

Exemplo de Entrada	Exemplo de Saída
7
4 5
13 10
6 4
3 3
3 5
3 4
3 8
0
11
5
0
0
0
12
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

	repet = armazenaInt() * 2;
	alocaRealloc(&pontNum, repet);
	//geraAleatorioInt(pontNum,repet);
	armazentaVetorInt(pontNum,repet);
	imprimiVet(pontNum, repet);
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

	for (int i = 0; i < tamanho; i++)
	{
		
	}
}

void alocaRealloc(int **pontNum, int tamanho)
{
	if ((*pontNum=(int*)realloc(*pontNum, tamanho*sizeof(int)))==NULL)
		exit(1);
}