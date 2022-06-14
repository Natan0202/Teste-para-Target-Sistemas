/***

2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE:
Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;

***/

#include <stdlib.h>
#include <stdio.h>

int main(){
	int num, x = 0, y = 1, prox;
	printf("Entre com o valor: ");
	scanf("%d", &num);
	
	for (int i = 1; i <= num; i++){
		
		if(x == num){
			printf("\nO numero pedido para a sequencia se encontra! ");
		}
		printf("\n %d " , x);
		prox = x + y;
		x = y;
		y = prox;
		

	}
	system("pause");
}
