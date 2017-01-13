/*
URI Online Judge | 1064
Positivos e Média
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada

A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes número será positivo.

Saída

O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.

Exemplo de Entrada	Exemplo de Saída
7
-5
6
-3.4
4.6
12
4 valores positivos
7.4
*/

#include <stdlib.h>
#include <stdio.h>

float armazenaFloat();

int main(int argc, char const *argv[])
{
	float contador[6];
	int aux=0, somador=0;

	for (int i = 0; i < 6; i++)
	{
		contador[i]=armazenaFloat();
		if (contador[i]>0)
		{
			somador += contador[i];
			aux++;
		}
	}

	printf("%i valores positivos\n%i\n", aux, somador/aux);
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
