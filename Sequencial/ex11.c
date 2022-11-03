#include <stdio.h>
#define PI 3.1415


int main() {
	double raio;
	printf("Insira o raio : ");
	scanf("%lf", &raio);
	printf("Volume da esfera : %g\n", (4.0/3.0) * PI * raio * raio);
	printf("Area da superficie : %g", 4.0 * PI * raio * raio);
	return 0;
}
