#include <stdio.h>

int main() {
    double x, y, z;
    int opcao;
    printf("Digite x : ");
    scanf("%lf", &x);
    printf("Digite y : ");
    scanf("%lf", &y);
    printf("Digite z : ");
    scanf("%lf", &z);
    printf("Digite a operacao desejada.\n");
    printf("1 - Media geometrica.\n");
    printf("2 - Media ponderada.\n");
    printf("3 - Media harmonica.\n");
    printf("4 - Media aritmetica.\n");
    printf("Opcao : ");
    scanf("%d", &opcao);
    switch(opcao) {
        case 1:
            printf("%g", x * y * z);
            break;
        case 2:
            printf("%g", (x + 2 * y + 3 * z) / 6);
            break;
        case 3:
            printf("%g", 1/(1/x + 1/y + 1/z));
            break;
        case 4:
            printf("%g", (x + y + z) / 3);
            break;
        default:
            printf("Opcao invalida");
            break;
    }
    return 0;
}