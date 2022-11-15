#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    printf("Digite um inteiro positivo : ");
    scanf("%d", &numero);
    if(numero < 1) {
        printf("Por favor digite um numero maior do que 0");
        return 0;
    }
    printf("Divisores:\n");
    for(int i = 1; i <= numero; i++) {
        if(numero % i == 0) {
            printf("\t%d\n", i);
            i = i*2 - 1;
        }
    }
    return 0;
}