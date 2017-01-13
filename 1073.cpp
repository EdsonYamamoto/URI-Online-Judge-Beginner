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
int contador(int repete, int *pontNum);
void teste();

int main()
{
	int numRepet, *pontNum, *novoPont, qtd=0, i;

	numRepet = armazenaInt();

	int vet[numRepet];
	pontNum=vet;

	qtd = contador(numRepet,pontNum);
	
	int powVet[qtd], cont=0;
	novoPont = powVet;

	for (int i = 0; i < qtd; i++)
	{
		if (*(pontNum+i)%2==0)
		{
			*(novoPont+cont) = pow(*(pontNum+i),2);
			cont++;
		}
	}
	
	for (int i = 0; i < qtd; i++)
		printf("%i^2 = %i\n", *(pontNum+i), *(novoPont+i));

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


int contador(int repete, int *pontNum)
{
	int qtdCont=0, i;
	for (int i = 1; i <= repete; i++)
		if (i%2==0)
		{
			*(pontNum+qtdCont)=i;
			qtdCont++;
		}

	return qtdCont;
}

void teste()
{
	printf("teste\n");
	system("PAUSE");
} 

