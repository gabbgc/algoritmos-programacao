#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], tamanho;
    printf("Digite o seu nome : ");
    scanf("%[^\n]s", &nome);
    tamanho = strlen(nome);
    printf("Voce digitou %d caracteres", tamanho);
    return 0;
}