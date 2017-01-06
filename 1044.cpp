/*
URI Online Judge | 1044
Múltiplos
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

Entrada

A entrada contém valores inteiros.

Saída

A saída deve conter uma das mensagens conforme descrito acima.

Exemplo de Entrada	Exemplo de Saída
6 24
Sao Multiplos
6 25
Nao sao Multiplos
*/

#include <stdlib.h>
#include <stdio.h>

int armazenaInt();

int main()
{
	int A, B, maior, menor;
	A = armazenaInt();
	B = armazenaInt();	

	if (A>B)
	{
		maior = A;
		menor = B;
	}
	else
	{
		maior = B;
		menor = A;
	}

	if (maior%menor==0)
		printf("Sao Multiplos\n");
	else
		printf("Nao sao Multiplos\n");
	system("PAUSE");
}


int armazenaInt()
{
	int valor;
	scanf("%i",&valor);
	fflush(stdin);

	return valor;
}