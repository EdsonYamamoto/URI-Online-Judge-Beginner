/*
URI Online Judge | 1072
Intervalo 2
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.

Entrada

A primeira linha da entrada contém um valor inteiro N (N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 

Saída

Para cada caso, imprima quantos números estão dentro (in) e quantos valores estão fora (out) do intervalo.

Exemplo de Entrada	Exemplo de Saída
4
14
123
10
-25
2 in
2 out
*/
#include <stdlib.h>
#include <stdio.h>

int armazenaInt();
void alocaRealloc(int **pontNum, int tam);
void teste();
int condVetor(int *pontNum, int tamVet, int limSup, int limInf);

int main()
{
	int numRepet, *pontNum, lSup=107, lInf=-107, in;

	numRepet = armazenaInt();

	//alocaRealloc(&pontNum,numRepet);

	int vet[numRepet];
	pontNum=vet;

	for (int i = 0; i < numRepet; i++)
		*(pontNum+i) = armazenaInt();

	in = condVetor(pontNum, numRepet, lSup, lInf);

	printf("%i in\n%i out\n", in, numRepet-in);

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

void alocaRealloc(int **pontNum, int tam)
{
	if ((*pontNum=(int*)realloc(*pontNum, tam*sizeof(int)))==NULL)
    	exit(1);
   	teste();
}

int condVetor(int *pontNum, int tamVet, int limSup, int limInf)
{
	int result=0;
	for (int i = 0; i < tamVet; i++)
		if (*(pontNum+i)>=limInf && *(pontNum+i)<=limSup)
			result++;

	return result;
}
void teste()
{
	printf("teste\n");
	system("PAUSE");
}