/***

2) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um n�mero, 
ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.

IMPORTANTE:
Esse n�mero pode ser informado atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definido no c�digo;

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
