/*
URI Online Judge | 1113
Crescente e Decrescente
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

Entrada

A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

Saída

Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem crescente, caso contrário imprima a mensagem “Decrescente”.

Exemplo de Entrada	Exemplo de Saída
5 4
7 2
3 8
2 2
Decrescente
Decrescente
Crescente
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
	int repet, repete2x, *pontNum=NULL;

	repet = armazenaInt();
	repete2x = repet*2;
	alocaRealloc(&pontNum, repete2x);
	geraAleatorioInt(pontNum,repete2x);
	//armazentaVetorInt(pontNum,repete2x);
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
		if (*(pontNum+i*2)>*(pontNum+i*2+1))
			printf("decrescente\n");
		else
			printf("crescente\n");
		
	}
}

void alocaRealloc(int **pontNum, int tamanho)
{
	if ((*pontNum=(int*)realloc(*pontNum, tamanho*sizeof(int)))==NULL)
		exit(1);
}
