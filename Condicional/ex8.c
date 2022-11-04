#include <stdio.h>
#include <string.h>

int main() {
    double valorProduto;
    char estado[2];
    printf("Digite o valor do produto : ");
    scanf("%lf", &valorProduto);
    printf("Digite o estado(MG, SP, RJ, MS) : ");
    scanf("%s", &estado);
    if(!strcmp(estado, "MG")) {
        printf("Valor de venda : R$ %g", valorProduto *= 1.07);
    }
    else if(!strcmp(estado, "SP")) {
        printf("Valor de venda : R$ %g", valorProduto *= 1.12);
    }
    else if(!strcmp(estado, "RJ")) {
        printf("Valor de venda : R$ %g", valorProduto *= 1.15);
    }
    else if(!strcmp(estado, "MS")) {
        printf("Valor de venda : R$ %g", valorProduto *= 1.08);
    }
    else {
        printf("Erro, estado invalido.");
    }
    return 0;
}