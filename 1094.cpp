/*
URI Online Judge | 1094
Experiências
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade de cobaias utilizadas em cada experimento.

Entrada

A primeira linha de entrada contém um valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia (1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Saída

Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o percentual deve ser apresentado com dois dígitos após o ponto.

Exemplo de Entrada	Exemplo de Saída
10
10 C
6 R
15 S
5 C
14 R
9 C
6 R
8 S
5 C
14 R
Total: 92 cobaias
Total de coelhos: 29
Total de ratos: 40
Total de sapos: 23
Percentual de coelhos: 31.52 %
Percentual de ratos: 43.48 %
Percentual de sapos: 25.00 %
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int armazenaInt();
int armazenaChar();

void geraAleatorio(int *pontNum, char *pontChar, int tamanho);
void armazentaVetor(int *pontNum, char *pontChar, int tamanho);

void imprimiVet(int *pontNum, char *pontChar, int tamanho);	
void alocaReallocInt(int **pontNum, int tamanho);
void alocaReallocChar(char **pontChar, int tamanho);
void teste();

int main()
{
	int repet, *pontNum=NULL;
	char *pontChar=NULL;

	repet = armazenaInt();
	alocaReallocInt(&pontNum, repet);
	alocaReallocChar(&pontChar, repet);
	//geraAleatorio(pontNum, pontChar, repet);
	armazentaVetor(pontNum, pontChar,repet);
	imprimiVet(pontNum, pontChar, repet);
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

int armazenaChar()
{
	int valor;
	scanf("%c",&valor);
	fflush(stdin);

	return valor;
}

void geraAleatorio(int *pontNum, char *pontChar, int tamanho)
{
	int valor;
	srand(time(NULL));
	for (int i = 0; i < tamanho; i++)
		*(pontNum+i) = rand() % 3;
	
	for (int i = 0; i < tamanho; ++i)
	{
		if (*(pontNum+i)==0)
			*(pontChar+i)='C';

		if (*(pontNum+i)==1)
			*(pontChar+i)='R';

		if (*(pontNum+i)==2)
			*(pontChar+i)='S';
	}

	for (int i = 0; i < tamanho; i++)
		*(pontNum+i) = rand() % 100;

	for (int i = 0; i < tamanho; i++)
		printf("%i\t%c\n",*(pontNum+i), *(pontChar+i));				
}

void armazentaVetor(int *pontNum, char *pontChar, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		*(pontNum+i) = armazenaInt();
		*(pontChar+i) = armazenaChar();
	}
}

void teste()
{
	printf("teste\n");
	system("PAUSE");
} 

void imprimiVet(int *pontNum, char *pontChar, int tamanho)
{
	int total = 0, ratQtd=0, coeQtd=0, sapQtd=0;
	float percRat, percSap, percCoe;
	for (int i = 0; i < tamanho; i++)
	{
		if (*(pontChar+i)=='C')
			coeQtd += *(pontNum+i);
		if (*(pontChar+i)=='R')
			ratQtd += *(pontNum+i);
		if (*(pontChar+i)=='S')
			sapQtd += *(pontNum+i);
	}
	total = coeQtd+ratQtd+sapQtd;
	percSap = (float) sapQtd/total*100;
	percCoe = (float) coeQtd/total*100;
	percRat = (float) ratQtd/total*100;
	printf("Total: %i cobaias\nTotal de coelhos: %i\nTotal de ratos: %i\nTotal de sapos: %i\nPercentual de coelhos: %.2f %\nPercentual de ratos: %.2f %\nPercentual de sapos: %.2f %\n", total, coeQtd, ratQtd, sapQtd, percCoe, percRat, percSap);
}

void alocaReallocInt(int **pontNum, int tamanho)
{
	if ((*pontNum=(int*)realloc(*pontNum, tamanho*sizeof(int)))==NULL)
		exit(1);
}

void alocaReallocChar(char **pontChar, int tamanho)
{
	if ((*pontChar=(char*)realloc(*pontChar, tamanho*sizeof(char)))==NULL)
		exit(1);
}