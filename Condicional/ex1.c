#include <stdio.h>

int main() {
	double n1, n2;
	printf("Digite o numero 1 : ");
	scanf("%lf", &n1);
	printf("Digite o numero 2 : ");
	scanf("%lf", &n2);
	if(n1 > n2)
		printf("O maior destes e o %g", n1);
	else if(n1 < n2)
		printf("O maior destes e o %g", n2);	
	return 0;
}
