/*
URI Online Judge | 1079
Médias Ponderadas
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

Entrada

O arquivo de entrada contém um valor inteiro N na primeira linha. Cada N linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.

Saída

Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
3
6.5 4.3 6.2
5.1 4.2 8.1
8.0 9.0 10.0
5.7
6.3
9.3
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int armazenaInt();
float armazenaFloat();

void geraAleatorioFloat(float *pontNum, int tamanho);
void armazentaVetorFloat(float *pontNum, int tamanho);

void imprimiVet(float *pontNum, int tamanho);	
void alocaRealloc(float **pontNum, int tamanho);
void teste();

int main()
{
	int repet;
	float *pontNum=NULL;

	repet = armazenaInt()*3;
	alocaRealloc(&pontNum, repet);
	//geraAleatorioFloat(pontNum,repet);
	armazentaVetorFloat(pontNum,repet);
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

float armazenaFloat()
{
	float valor;
	scanf("%f",&valor);
	fflush(stdin);

	return valor;
}

void geraAleatorioFloat(float *pontNum, int tamanho)
{
	float valor;
	srand(time(NULL));
	for (int i = 0; i < tamanho; i++)
		*(pontNum+i) = rand() % 100;
}

void armazentaVetorFloat(float *pontNum, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
		*(pontNum+i) = armazenaFloat();
}

void teste()
{
	printf("teste\n");
	system("PAUSE");
} 

void imprimiVet(float *pontNum, int tamanho)
{
	float soma=0;
	for (int i = 0; i < tamanho; i++)
	{
		if (i%3==0)
		{
			*(pontNum+i) *= 2;
		}

		else if (i%3==1)
		{
			*(pontNum+i) *= 3;
		}

		else if (i%3==2)
		{
			*(pontNum+i) *= 5;
		}
	}
	for (int i = 0; i <= tamanho; i++)
	{
		if (i%3!=0)
			soma += *(pontNum+i);

		else
		{
			if (i!=0)
				printf("%.1f\n", soma/10);
	
			soma=0;
			soma += *(pontNum+i);
		}
	}
}

void alocaRealloc(float **pontNum, int tamanho)
{
	if ((*pontNum=(float*)realloc(*pontNum, tamanho*sizeof(float)))==NULL)
		exit(1);
}