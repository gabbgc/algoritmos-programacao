#include <stdio.h>
#include <string.h>

int main() {
	char cor[10];
	printf("Digite uma cor: ");
	scanf("%s", cor);
	if(!strcmp(cor, "branco") || !strcmp(cor, "verde") ||
	!strcmp(cor, "amarelo")) 
		printf("Cor valida!");	
	else
		printf("Cor invalida!");
	return 0;
}
