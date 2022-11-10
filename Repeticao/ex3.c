#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro : ");
    scanf("%d", &numero);
    for(int i = 1; i <= numero*2; i++) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}