#include <stdio.h>

int main() {
    int opcao;
    double n1, n2, resultado;
    printf("Selecione a operacao:\n");
    printf("[1] - Soma\n");
    printf("[2] - Subtracao\n");
    printf("[3] - Multiplicacao\n");
    printf("[4] - Divisao\n");
    printf("Opcao : ");
    scanf("%d", &opcao);
    switch(opcao) {
        case 1:
            printf("Digite o primeiro numero : ");
            scanf("%lf", &n1);
            printf("Digite o segundo numero : ");
            scanf("%lf", &n2);
            resultado = n1 + n2;
            printf("%g + %g = %g", n1, n2, resultado);
            break;
        case 2:
            printf("Digite o primeiro numero : ");
            scanf("%lf", &n1);
            printf("Digite o segundo numero : ");
            scanf("%lf", &n2);
            resultado = n1 - n2;
            printf("%g - %g = %g", n1, n2, resultado);
            break;
        case 3:
            printf("Digite o primeiro fator : ");
            scanf("%lf", &n1);
            printf("Digite o segundo fator : ");
            scanf("%lf", &n2);
            resultado = n1 * n2;
            printf("%g * %g = %g", n1, n2, resultado);
            break;
        case 4:
            printf("Digite o dividendo : ");
            scanf("%lf", &n1);
            printf("Digite o divisor : ");
            scanf("%lf", &n2);
            resultado = n1 / n2;
            printf("%g / %g = %g", n1, n2, resultado);
            break;
        default:
            printf("Opcao invalida");
            break;
    }
    return 0;
}