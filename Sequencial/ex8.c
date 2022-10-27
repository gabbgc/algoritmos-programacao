/*
8. Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B -
C * D). Apresente o resultado da seguinte forma:
DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
DIFERENCA = “vaor de DIFERENCA
*/

#include <stdio.h>

int main() {
	int a, b, c, d, diferenca;
	
	printf("Digite 4 valores.\n");
	printf("A : ");
	scanf("%d", &a);
	printf("B : ");
	scanf("%d", &b);
	printf("C : ");
	scanf("%d", &c);
	printf("D : ");
	scanf("%d", &d);
	
	diferenca = (a * b - c * d);
	
	printf("DIFERENCA = (%d * %d - %d * %d)\n", a, b, c, d);
	printf("DIFERENCA = %d", diferenca);
	
	return 0;
}
