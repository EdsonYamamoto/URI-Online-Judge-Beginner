/*
URI Online Judge | 1049
Animal
Por Neilor Tonin, URI  Brasil
Timelimit: 1
Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.

vertebrado
	ave
		carnivoro - aguia
		onivoro - pomba
	mamifero
		onivoro - homem
		herbivoro - vaca
invetebrado
	inseto
		hematofago - pulga
		herbivoro - lagarta
	anelideo 
		hematofago - sanguessuga
		onivoro - minhoca

Entrada

A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, com todas as letras minúsculas.

Saída

Imprima o nome do animal correspondente à entrada fornecida.

Exemplos de Entrada	Exemplos de Saída
vertebrado
mamifero
onivoro
homem
vertebrado
ave
carnivoro
aguia
invertebrado
anelideo
onivoro
minhoca
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int osso(char *oss, int esp);
int reino(char *rein, int esp);
int alimenta(char *aliment, int esp);

void bdAnimais(int esp);

int main(int argc, char const *argv[])
{
	char ossos[15], *pontOsso, reinos[10], *pontReino, alimentas[12], *pontAlimenta;
	int especificacao=0;
	gets(ossos);
	gets(reinos);
	gets(alimentas);
	pontOsso = ossos;
	pontReino = reinos;
	pontAlimenta = alimentas;

	osso(ossos,especificacao);
	printf("%i\n", especificacao);
	reino(reinos,especificacao);
	printf("%i\n", especificacao);
	alimenta(alimentas, especificacao);
	printf("%i\n", especificacao);

	bdAnimais(especificacao);

	system("PAUSE");
	return 0;
}

int osso(char *oss, int esp)
{
	int tamanho;
	puts(oss);
	tamanho = strlen(oss);
	for (int i = 0; i < tamanho; i++)
	{
		
	}
	if (oss == "vertebrado")
		esp += 100;
	else if (oss == "invertebrado")
		esp += 200;
	printf("%i\n", esp);
	return esp;
}

int reino(char *rein, int esp)
{
	if (rein == "ave")
		esp += 10;

	else if(rein == "mamifero")
		esp += 20;

	else if(rein == "inseto")
		esp += 30;

	else if(rein == "anelideo")
		esp += 40;

	return esp;
}

int alimenta(char *aliment, int esp)
{
	if (aliment == "carnivoro")
		esp += 1;

	if (aliment == "onivoro")
		esp += 2;

	if (aliment == "herbivoro")
		esp += 3;

	if (aliment == "hematofago")
		esp += 4;
}

void bdAnimais(int esp)
{
	if (esp == 111)
		printf("Aguia\n");
	if (esp == 112)
		printf("Pomba\n");
	if (esp == 122)
		printf("Homem\n");
	if (esp == 123)
		printf("Vaca\n");
	if (esp == 234)
		printf("Pulga\n");
	if (esp == 233)
		printf("Lagarta\n");
	if (esp == 244)
		printf("Sanguessuga\n");
	if (esp == 242)
		printf("Minhoca\n");
}

// vertebrado
// 	ave
// 		carnivoro - aguia
// 		onivoro - pomba
// 	mamifero
// 		onivoro - homem
// 		herbivoro - vaca
// invetebrado
// 	inseto
// 		hematofago - pulga
// 		herbivoro - lagarta
// 	anelideo 
// 		hematofago - sanguessuga
// 		onivoro - minhoca