/*
URI Online Judge | 1050
DDD
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:

Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD nao cadastrado

Entrada

A entrada consiste de um único valor inteiro.

Saída

Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD nao cadastrado caso não existir DDD correspondente ao número digitado.

Exemplo de Entrada	Exemplo de Saída
11
Sao Paulo
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int armazenaInt();
void teste();
void bdDDD(int codigoLocal, char *pontCidade);

int main()
{
	int DDD;
	char nomeCidade[100]="";
	
	DDD = armazenaInt();

	bdDDD(DDD,nomeCidade);

	puts(nomeCidade);
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

void bdDDD(int codigoLocal, char *pontCidade)
{
	if (codigoLocal==15)
		strcat(pontCidade,"Sao Paulo");
	
	else if (codigoLocal==11)
		strcat(pontCidade,"Rio de Janeiro");
	
	else
		strcat(pontCidade,"DDD nao cadastrado");

}
void teste()
{
	printf("\n\nteste\n\n");
}