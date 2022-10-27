/*
4. Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
de A e B atribuindo o seu resultado na variável X. Imprima o resultado da seguinte
forma “valor de A” + “valor de B” = “valor de X”.
*/

#include <stdio.h>

int main() {
	int a, b, x;
	
	printf("Digite 2 valores inteiros e sua soma sera mostrada.\n");
	printf("Valor 1: ");
	scanf("%d", &a);
	printf("Valor 2: ");
	scanf("%d", &b);
	
	x = a + b;	
	printf("%d + %d = %d", a, b, x);
}
