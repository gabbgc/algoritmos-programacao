#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro positivo : ");
    scanf("%d", &numero);
    for(int i = 0; i<=numero; i++)
        printf("%d\n", i);
    return 0;
}