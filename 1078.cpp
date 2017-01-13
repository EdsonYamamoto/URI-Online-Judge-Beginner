/*
URI Online Judge | 1078
Tabuada
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:      
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Entrada

A entrada contém um valor inteiro N (2 < N < 1000).

Saída

Imprima a tabuada de N, conforme o exemplo fornecido.

Exemplo de Entrada	Exemplo de Saída
140
1 x 140 = 140
2 x 140 = 280
3 x 140 = 420
4 x 140 = 560
5 x 140 = 700
6 x 140 = 840
7 x 140 = 980
8 x 140 = 1120
9 x 140 = 1260
10 x 140 = 1400
*/


#include <stdlib.h>
#include <stdio.h>

int armazenaInt();

void imprimiVet(int tamanho, int limInf, int limSup);	

void teste();

int main()
{
	int repet, lInf=1, lSup=10;

	repet = armazenaInt();
	
	imprimiVet(repet, lInf, lSup);
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

void imprimiVet(int tamanho, int limInf, int limSup)
{
	for (int i = limInf; i <= limSup; i++)
		printf("%i x %i = %i\n", i, tamanho, tamanho*i);
}
