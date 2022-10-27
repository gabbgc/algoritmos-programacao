/*
7. Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e
atribua esta operação à variável PROD. A seguir mostre a variável PROD com
mensagem: PROD = “valor de PROD”.
*/

#include <stdio.h>

int main() {
	int val1, val2, PROD;
	
	printf("Digite dois inteiros para que seja mostrada o seu produto.\n");
	
	printf("Valor 1: ");
	scanf("%d", &val1);
	
	printf("Valor 2: ");
	scanf("%d", &val2);
	
	PROD = val1 * val2;
	printf("PROD = %d", PROD);
}
