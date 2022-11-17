#include <stdio.h>
#include <string.h>

int main() {
	char pNome[50], sobrenome[50], cpf[50], senha[150], ph[30];
	printf("Digite o seu primeiro nome: ");
	fflush(stdin);
	scanf("%s", pNome);
	printf("Digite o seu sobrenome: ");
	fflush(stdin);
	scanf("%[^\n]s", sobrenome);
	printf("Digite o seu CPF: ");
	fflush(stdin);
	scanf("%s", cpf);
	strcpy(senha, "");
	strcat(senha, pNome);
	ph[0] = sobrenome[0];
	ph[1] = '\0';
	strcat(senha, ph);
	ph[0] = cpf[0];
	ph[1] = cpf[1];
	ph[2] = cpf[2];
	ph[3] = '\0';
	strcat(senha, ph);
	printf("Senha gerada: %s", senha);
	return 0;
}
