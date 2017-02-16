/*
URI Online Judge | 1101
Sequência de Números e Soma
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada

O arquivo de entrada contém um número não determinado de valores M e N. A última linha de entrada vai conter um número nulo ou negativo.

Saída

Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.

Exemplo de Entrada	Exemplo de Saída
5 2
6 3
5 0
2 3 4 5 Sum=14
3 4 5 6 Sum=18
*/


#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int armazenaInt();

int geraAleatorioInt(int *pontNum);
int armazentaVetorInt(int *pontNum);

void imprimiVet(int *pontNum, int tamanho);	
void alocaRealloc(int **pontNum, int tamanho);
void teste();

int main()
{
	int *pontNum=NULL, cont=0, tam;

	tam = geraAleatorioInt(pontNum);
	//tam = armazentaVetorInt(pontNum);
	imprimiVet(pontNum, tam);
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

int geraAleatorioInt(int *pontNum)
{
	int i=0;
	char cond='s';
	srand(time(NULL));
	
	do{
		alocaRealloc(&pontNum, i+1);
		*(pontNum+i) = rand() % 5;
		printf("%i\n", *(pontNum+i) );

		if (*(pontNum+i)<=0)
			cond='n';
		
		else
			i++;	

	} while (cond=='s');
 	
	return i;
}

int armazentaVetorInt(int *pontNum)
{z
	int i=0;
	do{
		alocaRealloc(&pontNum, i+1);
		*(pontNum+i) = armazenaInt();
		i++;
	} while (*(pontNum+i)>0);

	return i;
}

void teste()
{
	printf("teste\n");
	system("PAUSE");
} 

void imprimiVet(int *pontNum, int tamanho)
{
	int somaA=0, somaB=0;
	for (int i = 0; i < tamanho; i++)
	{
		if (i%2==0)
			somaA += *(pontNum+i);

		else
			somaB += *(pontNum+i);
	}
	printf("Sum=%i\nSum=%i\n",somaA, somaB);
}

void alocaRealloc(int **pontNum, int tamanho)
{
	if ((*pontNum=(int*)realloc(*pontNum, tamanho*sizeof(int)))==NULL)
		exit(1);
}