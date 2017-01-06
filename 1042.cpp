/*
URI Online Judge | 1042
Sort Simples
Adaptado por Neilor Tonin, URI  Brasil
Timelimit: 1
Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada

A entrada contem três números inteiros.

Saída

Imprima a saída conforme foi especificado.

Exemplo de Entrada	Exemplo de Saída
7 21 -14
-14
7
21

7
21
-14
-14 21 7
-14
7
21

-14
21
7
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[3], i, maior=0, menor=999999999, medio, indMai, indMen;
	
	for(i=0;i<3;i++)
    	scanf("%d",& vetor[i]);
    	
	for(i=0;i<3;i++)
	{
		if(vetor[i]<menor)
		{
			menor = vetor[i];
			indMen = i;
		}
	}
	
	for(i=0;i<3;i++)
	{
		if(vetor[i]>maior)
		{
			maior = vetor[i];
			indMai = i;
		}
	}
	
	
	
	printf("%d\n",maior);
	printf("%d\n",menor);
    	
    for(i=0;i<3;i++)
    	printf("%d\n", vetor[i]);

    return 0;
}
