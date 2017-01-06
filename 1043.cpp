/*
URI Online Judge | 1043
Triângulo
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem


Area = XX.X

Entrada

A entrada contém três valores reais.

Saída

O resultado deve ser apresentado com uma casa decimal.

Exemplo de Entrada	Exemplo de Saída
6.0 4.0 2.0
Area = 10.0
6.0 4.0 2.1
Perimetro = 12.1
*/

#include <stdlib.h>
#include <stdio.h>

float armazenafloat();
void testeTri (float a,float b, float c);

int main(int argc, char const *argv[])
{
	float A, B, C, aux;
	A = armazenafloat();
	B = armazenafloat();
	C = armazenafloat();
	testeTri(A,B,C);

	system("PAUSE");
	return 0;
}

float armazenafloat()
{
	float valor;
	scanf("%f",&valor);
	fflush(stdin);

	return valor;
}

void testeTri (float a,float b, float c)
{
	int tam = 3;
	float vetor[3], aux, area=0, perimetro=0, maior, menor;
	vetor[0] = a;
	vetor[1] = b;
	vetor[2] = c;
	for (int j = 0; j < tam-1; j++)
	{
		for (int i = 0; i < tam-1; i++)
		{	
			if (vetor[i]>vetor[i+1])
			{
				aux = vetor[i];
				vetor[i] = vetor[i+1];
				vetor[i+1] = aux;	
			}
		}
	}
	
	for (int i = 0; i < tam; i++)
	{
		printf("%f\n", vetor[i]);
	}

	
	if (vetor[2]<vetor[0]+vetor[1])
	{
		perimetro=vetor[0]+vetor[1]+vetor[2];
		printf("Perimetro = %f\n", perimetro);
	}
	else
	{
		if (a<b)
		{
			maior = b;
			menor = a;
		}
		else
		{
			maior = a;
			menor = b;
		}

		area = c * (maior - menor) + menor * c;
		printf("area = %f\n", area);
	}

}