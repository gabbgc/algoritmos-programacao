#include <stdio.h>

int main() {
	int n1;
	printf("Digite um inteiro : ");
	scanf("%d", &n1);
	if(n1 % 2 == 0)
		printf("E par");
	else
		printf("E impar");
	return 0;
}
