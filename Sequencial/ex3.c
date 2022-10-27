/*
3. Faça um algoritmo que leia um numero inteiro, dois números reais (um float e um
double), um caracter (uma única letra), uma string (conjunto de caracteres) e um
booleano. Na sequência, imprima todos com a formatação abaixo.
Numero inteiro: “valor”
Numeros reais:
“valor”
“valor”
Letra: “valor”
String: “valor”
Logico: “valor”
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
	int inteiro;
	float realFloat;
	double realDouble;
	char caracter;
	char string[30];
	bool booleano;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &inteiro);
	
	printf("Digite um numero real: ");
	scanf("%f", &realFloat);
	
	printf("Digite um outro numero real: ");
	scanf("%lf", &realDouble);
	
	printf("Digite um caracter: ");
	fflush(stdin);
	scanf("%c", &caracter);
	
	printf("Digite um conjunto de caracteres: ");
	fflush(stdin);
	scanf("%s", &string);
	
	printf("Digite um booleano: ");
	scanf("%b", &booleano);
	
	printf("Numero inteiro: %d\n", inteiro);
	printf("Numeros reais:\n%f\n%lf\n", realFloat, realDouble);
	printf("Letra: %c\n", caracter);
	printf("String: %s\n", string);
	printf("Logico: %i", booleano);

	return 0;	
}
