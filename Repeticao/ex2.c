#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro positivo : ");
    scanf("%d", &numero);
    for(int i = numero; i>=0; i--)
        printf("%d\n", i);
    return 0;
}