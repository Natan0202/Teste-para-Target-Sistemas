/***
5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;


***/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	

	char letra[200];
	int tamanho;
	printf("Digite a palavra: ");
	gets(letra);
	
	tamanho = strlen(letra);
	printf("%d", tamanho);
	for (int i = tamanho; i >= 0; i--){
		
		printf("%c " , letra[i]);
	}
}
