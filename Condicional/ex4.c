#include <stdio.h>

int main() {
	double salario, prestacao;
	printf("Digite o seu salario : ");
	scanf("%lf", &salario);
	printf("Digite o valor da prestacao : ");
	scanf("%lf", &prestacao);
	if(prestacao > salario * 0.2)
		printf("Emprestimo nao concedido");
	else
		printf("Emprestimo concedido");
	return 0;
}
