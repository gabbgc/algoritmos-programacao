#include <stdio.h>

int main() {
	char pNome[30], nMeio[50], uNome[30], nomeCompl[120];
	printf("Digite o primeiro nome: ");
	fflush(stdin);
	scanf("%s", pNome);
	printf("Digite o(s) nome(s) do meio: ");
	fflush(stdin);
	scanf("%[^\n]s", nMeio);
	printf("Digite o ultimo nome: ");
	fflush(stdin);
	scanf("%s", uNome);
	strcpy(nomeCompl, "");
	strcat(nomeCompl, pNome);
	strcat(nomeCompl, " ");
	strcat(nomeCompl, nMeio);
	strcat(nomeCompl, " ");
	strcat(nomeCompl, uNome);
	printf("Nome completo:\n%s", nomeCompl);
	return 0;
}
