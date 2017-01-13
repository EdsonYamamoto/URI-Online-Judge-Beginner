/*
URI Online Judge | 1075
Resto 2
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro N. Apresente todos os números entre 1 e 10000 que divididos por N dão resto igual a 2.

Entrada

A entrada contém um valor inteiro N (N < 10000).

Saída

Imprima todos valores que quando divididos por N dão resto = 2, um por linha.

Exemplo de Entrada	Exemplo de Saída
13
2
15
28
41
...
*/


#include <stdlib.h>
#include <stdio.h>

int armazenaInt();

void imprimiVet(int tamanho, int limInf, int limSup);	

void teste();

int main()
{
	int repet, lInf=1, lSup=1000;

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
	for (int i = limInf; i < limSup; i++)
		if (i%tamanho==2)
			printf("%i\n", i);
}
