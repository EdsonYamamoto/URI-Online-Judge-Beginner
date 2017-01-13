/*
URI Online Judge | 1066
Pares, Ímpares, Positivos e Negativos
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada

O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída

Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.

Exemplo de Entrada	Exemplo de Saída
-5
0
-3
-4
12
3 valor(es) par(es)
2 valor(es) impar(es)
1 valor(es) positivo(s)
3 valor(es) negativo(s)
*/

#include <stdlib.h>
#include <stdio.h>

int armazenaInt();

int main(int argc, char const *argv[])
{
	int num=5, par=0, impar=0, positivo=0, negativo=0;
	int vetor[num];

	for (int i = 0; i < num; i++)
	{
		vetor[i]=armazenaInt();
		if (vetor[i]%2==0)
			par++;
		else
			impar++;
		if (vetor[i]>0)
			positivo++;
		else
			negativo++;
	}

	printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", par, impar,positivo, negativo);
	system("PAUSE");
	return 0;
}


int armazenaInt()
{
	int valor;
	scanf("%i", &valor);
	fflush(stdin);

	return valor;
}