#include <stdio.h>

int main() {
    double menor, maior, numero;
    printf("Digite o numero 1 : ");
    scanf("%lf", &numero);
    maior = numero;
    menor = numero;
    for(int i = 1; i < 10; i++) {
        printf("Digite o numero %d : ", i + 1);
        scanf("%lf", &numero);
        if(numero > maior)
            maior = numero;
        if(numero < menor)
            menor = numero;
    }
    return 0;
}