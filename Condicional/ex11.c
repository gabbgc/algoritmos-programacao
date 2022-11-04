#include <stdio.h>

int main() {
    int x, y, z;
    int opcao;
    printf("Digite x : ");
    scanf("%d", &x);
    printf("Digite y : ");
    scanf("%d", &y);
    printf("Digite z : ");
    scanf("%d", &z);
    if(x > 0 && y > 0 && z > 0) {
        printf("Digite a operacao desejada.\n");
        printf("1 - Media geometrica.\n");
        printf("2 - Media ponderada.\n");
        printf("3 - Media harmonica.\n");
        printf("4 - Media aritmetica.\n");
        printf("Opcao : ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("%d", x * y * z);
                break;
            case 2:
                printf("%g", ((double) x + 2 * (double) y + 3 * (double) z) / 6);
                break;
            case 3:
                printf("%g", 1/(1/(double) x + 1/(double) y + 1/(double) z));
                break;
            case 4:
                printf("%g", ((double) x + (double) y + (double) z) / 3);
                break;
            default:
                printf("Opcao invalida");
                break;
        }
    }
    else
        printf("Por favor digite um numeros positivos.");
    return 0;
}