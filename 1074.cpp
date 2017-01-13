/*
URI Online Judge | 1074
Par ou Ímpar
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro N. Este valor será a quantidade de valores que serão lidos em seguida. Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (EVEN), ímpar (ODD), positivo (POSITIVE) ou negativo (NEGATIVE). No caso do valor ser igual a zero (0), embora a descrição correta seja (EVEN NULL), pois por definição zero é par, seu programa deverá imprimir apenas NULL.

Entrada

A primeira linha da entrada contém um valor inteiro N(N < 10000) que indica o número de casos de teste. Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).

Saída

Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo abaixo. Todas as letras deverão ser maiúsculas e sempre deverá haver um espaço entre duas palavras impressas na mesma linha.

Exemplo de Entrada	Exemplo de Saída
4
-5
0
3
-4
ODD NEGATIVE
NULL
ODD POSITIVE
EVEN NEGATIVE
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

	repet = armazenaInt();
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
		//printf("%i\t", *(pontNum+i));
		if (*(pontNum+i)==0)
			printf("NULL\n");
		else
		{
			if (*(pontNum+i)%2==0)
				printf("EVEN ");
			if (*(pontNum+i)%2!=0)
				printf("ODD ");

			if (*(pontNum+i)>0)
				printf("POSITIVE\n");
			if (*(pontNum+i)<0)
				printf("NEGATIVE\n");
		}
		
	}
}

void alocaRealloc(int **pontNum, int tamanho)
{
	if ((*pontNum=(int*)realloc(*pontNum, tamanho*sizeof(int)))==NULL)
		exit(1);
}