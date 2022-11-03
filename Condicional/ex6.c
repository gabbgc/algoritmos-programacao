#include <stdio.h>

int main() {
	double altura;
	char sexo;
	printf("Digite sua altura(em metros): ");
	scanf("%lf", &altura);
	fflush(stdin);
	printf("Digite o seu sexo(F, M) : ");
	scanf("%c", &sexo);
	if(sexo == 'F')
		printf("Seu peso ideal e : %g", (62.1 * altura) - 44.7);
	else if(sexo == 'M')
		printf("Seu peso ideal e : %g", (72.7 * altura) - 58);
	return 0;
}
