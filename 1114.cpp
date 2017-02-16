/*
URI Online Judge | 1114
Senha Fixa
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002. 

Entrada

A entrada é composta por vários casos de testes contendo valores inteiros.

Saída

Para cada valor lido mostre a mensagem correspondente à descrição do problema.

Exemplo de Entrada	Exemplo de Saída
2200
1020
2022
2002
Senha Invalida
Senha Invalida
Senha Invalida
Acesso Permitido
Formatação e inserção no portal por Cássio Favaretto.
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int armazenaInt();

void imprimi(int *pontNum, int tamanho);	
void alocaRealloc(int **pontNum, int tamanho);
void teste();

int main()
{
	int repet=0, senha=2002, chaveSenha=0;

	do{
		repet = armazenaInt();
		if (repet!=senha)
			printf("Senha Invalida\n");
		
		else
		{
			chaveSenha=1;
			printf("Acesso Permitido\n");
		}
		
	} while (chaveSenha!=1);
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

void alocaRealloc(int **pontNum, int tamanho)
{
	if ((*pontNum=(int*)realloc(*pontNum, tamanho*sizeof(int)))==NULL)
		exit(1);
}