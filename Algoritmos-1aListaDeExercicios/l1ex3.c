#include <stdio.h>

/*Construa um algoritmo que calcule a média aritmética de 3 números quaisquer
fornecidos pelo usuário.*/

int main() {
    int n1, n2, n3;
    float media;
    printf("Digite o n1: ");
    scanf("%d", &n1);
    printf("Digite o n2: ");
    scanf("%d", &n2);
    printf("Digite o n3: ");
    scanf("%d", &n3);
    media = (n1 + n2 + n3)/3;
    printf("A meidia aritmetica dos numeros inseridos e: %f", media);
    return 0;
}