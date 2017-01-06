/*
URI Online Judge | 1045
Tipos de Triângulos
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:
se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
Entrada

A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída

Imprima todas as classificações do triângulo especificado na entrada.

Exemplos de Entrada	Exemplos de Saída
7.0 5.0 7.0
TRIANGULO ACUTANGULO
TRIANGULO ISOSCELES
6.0 6.0 10.0
TRIANGULO OBTUSANGULO
TRIANGULO ISOSCELES
6.0 6.0 6.0
TRIANGULO ACUTANGULO
TRIANGULO EQUILATERO
5.0 7.0 2.0
NAO FORMA TRIANGULO
6.0 8.0 10.0
TRIANGULO RETANGULO
*/

#include <stdlib.h>
#include <stdio.h>

float armazenaFloat();
void bubbleSort(float *pont, int tam);
void tpTriang(float a, float b, float c);

int main(int argc, char const *argv[])
{
	int tamanho = 3;
	float A,B,C, vetor[tamanho], *pont;
	A = armazenaFloat();
	B = armazenaFloat();
	C = armazenaFloat();
	vetor[0] = A;
	vetor[1] = B;
	vetor[2] = C;
	pont = vetor;
	bubbleSort(pont,tamanho);
	A = vetor[0];
	B = vetor[1];
	C = vetor[2];
	tpTriang(A,B,C);
	system("PAUSE");
	return 0;
}

float armazenaFloat()
{
	float valor;
	scanf("%f",&valor);
	fflush(stdin);
	return valor;
}


void bubbleSort(float *pont, int tam)
{
	float aux;
	for (int j = 0; j < tam-1; j++)
	{
		for (int i = 0; i < tam-1; i++)
		{
			if (*(pont+i) < *(pont+i+1))
			{
				aux = *(pont+i);
				*(pont+i) = *(pont+i+1);
				*(pont+i+1) = aux;
			}
		}
	}
}


void tpTriang(float a, float b, float c)
{
	if(a>=b+c)
		printf("NAO FORMA TRIANGULO\n");
	else
	{
		if (a == b+c)
			printf("TRIANGULO RETANGULO\n");
		if (a > b+c)
			printf("TRIANGULO OBTUSANGULO\n");
		if (a < b+c)
			printf("TRIANGULO ACUTANGULO\n");
		if (a == b && a == c)
			printf("TRIANGULO EQUILATERO\n");
		if (a == b || a == c || b == c)
			printf("TRIANGULO ISOSCELES\n");
	}
}