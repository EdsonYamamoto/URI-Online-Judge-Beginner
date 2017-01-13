/*
URI Online Judge | 1095
Sequencia IJ 1
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada

Não há nenhuma entrada neste problema.

Saída

Imprima a sequencia conforme exemplo abaixo

Exemplo de Entrada	Exemplo de Saída
I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=1, j=60;
	printf("I=%i J=%i\n", i, j);
	for (int k = 0; k < 12; k++)
	{
		i += 3;
		j -= 5;
		printf("I=%i J=%i\n", i, j);
	}
	system("PAUSE");
	return 0;
}