/*
URI Online Judge | 1065
Pares entre Cinco Números
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada

O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída

Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.

Exemplo de Entrada	Exemplo de Saída
7
-5
6
-4
12
3 valores pares
*/

#include <stdlib.h>
#include <stdio.h>

int armazenaInt();
int contador(int qtd);

int main(int argc, char const *argv[])
{
	printf("%i\n", contador(5));

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

int contador(int qtd)
{
	int vetor[qtd], aux=0;
	for (int i = 0; i < qtd; ++i)
	{
		vetor[i] = armazenaInt();
		if (vetor[i]%2==0)
			aux++;
	}
	return aux;
}
