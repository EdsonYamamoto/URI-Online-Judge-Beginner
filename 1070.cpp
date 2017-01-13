/*
URI Online Judge | 1070
Seis Números Ímpares
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

Entrada

A entrada será um valor inteiro positivo.

Saída

A saída será uma sequência de seis números ímpares.

Exemplo de Entrada	Exemplo de Saída
8
9
11
13
15
17
19
*/

#include <stdlib.h>
#include <stdio.h>

int armazenaInt();

int main(int argc, char const *argv[])
{
	int inicio, repeticoes=6;

	inicio = armazenaInt();

	printf("%i\n", inicio);
	for (int i = 0; i < repeticoes; ++i)
	{
		do {
		 	inicio++;
		} while(inicio%2==0);
		printf("%i\n", inicio);
	}

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

