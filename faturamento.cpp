/***4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.***/

#include <stdlib.h>
#include <stdio.h>

int main(){
	float soma, sp, rj, mg, es;
	soma = 180.767;
	printf("\nSao Paulo teve a porcetagem de: %2.1f", (67.836 / 180.767) * 100);
	printf("\nRio de Janeiro teve a porcetagem de: %2.1f", ( 36.678 / 180.767) * 100);
	printf("\nMinas Gerais teve a porcetagem de: %2.1f", ( 29.229 / 180.767) * 100);
	printf("\nEspirito Santo teve a porcetagem de: %2.1f", ( 27.167 / 180.767) * 100);
	printf("\nOutros teve a porcetagem de: %2.1f", ( 19.849 / 180.767 ) * 100);	
}
