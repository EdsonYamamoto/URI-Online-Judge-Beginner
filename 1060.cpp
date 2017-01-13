/*
URI Online Judge | 1060
Números Positivos
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

Entrada

Seis valores, negativos e/ou positivos.

Saída

Imprima uma mensagem dizendo quantos valores positivos foram lidos.

Exemplo de Entrada	Exemplo de Saída
7
-5
6
-3.4
4.6
12
4 valores positivos
*/

#include <stdlib.h>
#include <stdio.h>

float armazenaFloat();
int contador();

int main(int argc, char const *argv[])
{
	int vezes;

	//vezes = contador();
	//printf("%i valores positivos\n", vezes);
	printf("%i valores positivos\n", contador());
	system("PAUSE");	
	return 0;
}

float armazenaFloat()
{
	float valor;
	scanf("%f", &valor);
	fflush(stdin);

	return valor;
}

int contador()
{
	float contador[6];
	int aux=0;

	for (int i = 0; i < 6; i++)
	{
		contador[i]=armazenaFloat();
		if (contador[i]>0)
		{
			aux++;
		}
	}
	return aux;
}