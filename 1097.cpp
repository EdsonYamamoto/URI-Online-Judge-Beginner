/*
URI Online Judge | 1097
Sequencia IJ 3
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada

Não há nenhuma entrada neste problema.

Saída

Imprima a sequencia conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=9
I=3 J=8
I=3 J=7
...
I=9 J=15
I=9 J=14
I=9 J=13
*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=1, j=7, m=1;
	for (int k = 0; k <= 3; k++)
	{
		for (int l = 0; l < 3; l++)
		{
			printf("I=%i J=%i\n", i, j);
			j--;
		}
		j += 4+m;
		i = m * 3;
		m++;
	}
	system("PAUSE");
	return 0;
}