#include <stdio.h>
#include <string.h>

int main() {
	char nomeComp[50], email[50], endereco[50];
	char cpnomeComp[50], cpemail[50], cpendereco[50];
	printf("Digite um nome completo: ");
	fflush(stdin);
	scanf("%[^\n]s", nomeComp);
	printf("Digite um email: ");
	fflush(stdin);
	scanf("%s", email);
	printf("Digite um endereco: ");
	fflush(stdin);
	scanf("%[^\n]s", cpendereco);
	strcpy(cpnomeComp, nomeComp);
	strcpy(cpemail, email);
	strcpy(cpendereco, endereco);
	return 0;
}
