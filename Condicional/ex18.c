#include <stdio.h>

int main() {
    int numero;
    printf("Digite um inteiro : ");
    scanf("%d", &numero);
    if(numero % 5 == 0 ^ numero % 3 == 0)
        printf("Passou");
    else
        printf("Nao passou");
    return 0;
}