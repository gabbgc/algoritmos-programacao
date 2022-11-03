#include <stdio.h>
#include <math.h>

int main() {
	int numero;
	printf("Digite um numero : ");
	scanf("%d", &numero);
	if(numero >= 0) {
		printf("%d ao Quadrado : %g\n", numero, pow(numero, 2));
		printf("Raiz Quadrada : %g", sqrt(numero));
	}
	return 0;
}
