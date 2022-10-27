/*
5. Faça o mesmo exercício, porém, realizando o calculo dentro do printf
*/

#include <stdio.h>

int main() {
	int a, b, x;
	
	printf("Digite 2 valores inteiros e sua soma sera mostrada.\n");
	printf("Valor 1: ");
	scanf("%d", &a);
	printf("Valor 2: ");
	scanf("%d", &b);	
	printf("%d + %d = %d", a, b, a + b);
}
