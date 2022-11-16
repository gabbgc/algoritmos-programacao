#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro maior do que 1 : ");
    scanf("%d", &numero);
    if(numero < 2) {
        printf("Numero invalido.");
        return 0;
    }
    for(int i = 2; i < numero; i++) {
        if(numero % i == 0) {
            printf("Nao e primo.");
            return 0;
        }
    }
    printf("E primo.");
    return 0;
}