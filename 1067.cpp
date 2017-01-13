/*
URI Online Judge | 1067
Números Ímpares
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro X (1 <= X <= 1000). Em seguida mostre os ímpares de 1 até X, um valor por linha, inclusive o X, se for o caso.

Entrada

O arquivo de entrada contém 1 valor inteiro qualquer.

Saída

Imprima todos os valores ímpares de 1 até X, inclusive X, se for o caso.

Exemplo de Entrada	Exemplo de Saída
8
1
3
5
7
*/

#include <stdlib.h>
#include <stdio.h>

int armazenaInt();

int main(int argc, char const *argv[])
{
	int inicio, fim;

	inicio = armazenaInt();
	fim = armazenaInt();

	for (int i = inicio; i <= fim; i++)
		if (i%2!=0)
			printf("%i\n", i);		

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