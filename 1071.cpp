/*
URI Online Judge | 1071
Soma de Impares Consecutivos I
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada

O arquivo de entrada contém dois valores inteiros.

Saída

O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.

Exemplo de Entrada	Exemplo de Saída
6
-5
5
15
12
13
12
12
0
*/

#include <stdlib.h>
#include <stdio.h>

int armazenaInt();
int somaImpar(int numero1, int numero2);

int main(int argc, char const *argv[])
{
	int num1, num2, result;

	num1 = armazenaInt();
	num2 = armazenaInt();

	result = somaImpar(num1, num2);
	printf("%i\n", result);

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

int somaImpar(int numero1, int numero2)
{
	int resultado=0;

	if (numero1%2!=0)
		resultado +=numero1;

	if (numero2%2!=0)
		resultado +=numero2;

	return resultado;
}