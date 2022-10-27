/*
10. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer
no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas
decimais após a vírgula, segundo a fórmula:
*/

#include <stdio.h>
#include <math.h>

int main() {
	double x1, x2, y1, y2, distancia;
	
	printf("Inclua duas cordenadas do plano e sera mostrada a sua distancia.\n");
	printf("Cordenada1 x: ");
	scanf("%lf", &x1);
	printf("Cordenada1 y: ");
	scanf("%lf", &y1);
	printf("Cordenada2 x: ");
	scanf("%lf", &x2);
	printf("Cordenada2 y: ");
	scanf("%lf", &y2);
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("Distancia entre os dois pontos: %.2lf", distancia);
}
