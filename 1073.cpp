/*
URI Online Judge | 1073
Quadrado de Pares
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N, inclusive N, se for o caso.

Entrada

A entrada contém um valor inteiro N (5 < N < 2000).

Saída

Imprima o quadrado de cada um dos valores pares, de 1 até N, conforme o exemplo abaixo.

Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de 1000000 o que ocasionará resposta errada. Neste caso, configure a precisão adequadamente para que isso não ocorra.

Exemplo de Entrada	Exemplo de Saída
6
2^2 = 4
4^2 = 16
6^2 = 36
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int armazenaInt();
void teste();

int main()
{
	int numRepet, *pontNum;

	numRepet = armazenaInt();

	int vet[numRepet];
	pontNum=vet;

	for (int i = 0; i < numRepet; i++)
		*(pontNum+i) = armazenaInt();

	for (int i = 0; i < numRepet; i++)
		printf("%i^2 = %i\n", *(pontNum+i), pow(*(pontNum+i),2));

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

void teste()
{
	printf("teste\n");
	system("PAUSE");
}