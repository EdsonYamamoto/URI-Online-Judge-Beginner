/*
URI Online Judge | 1059
Números Pares
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada

Neste problema extremamente simples de repetição não há entrada.

Saída

Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.

Exemplo de Entrada	Exemplo de Saída
2
4
6
...
100
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	for (int i = 1; i < 101; ++i)
	{
		if (i%2 == 0)
		{
			printf("%i\n", i);
		}
	}
	system("PAUSE");
	return 0;
}