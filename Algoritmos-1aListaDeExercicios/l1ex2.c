#include <stdio.h>

/*Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo
usuário (use área= 3.14 x raio2)*/

int main() {
  float raio, area;
  printf("Raio: ");
  scanf("%f", &raio);
  area = 3.14 * raio * raio;
  printf("Area: %g", area);
  return 0;
}
