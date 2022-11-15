#include <stdio.h>

int main() {
    int numero, maior = 0, menor = 9999999;
    while(1) {
        printf("Digite um numero inteiro : ");
        scanf("%d", &numero);
        if(numero < 0) {
            printf("Menor numero lido: %d\n", menor);
            printf("Maior numero lido: %d\n", maior);
            return 0;
        }
        if(numero > maior)
            maior = numero;
        else if(numero < menor)
            menor = numero;
    }
    return 0;
}