#include <stdio.h>

int main() {
    int qabacaxi = 0, qmaca = 0, qpera = 0, fruta, buffer;
    while(1) {
        printf("Seleciona qual fruta deseja comprar.\n");
        printf("[1] - Abacaxi. R$ 5,00\n");
        printf("[2] - Maca. R$ 1,00\n");
        printf("[3] - Pera. R$ 4,00\n");
        printf("[4] - Terminar Compra.\n");
        printf("Fruta : ");
        scanf("%d", &fruta);
        switch(fruta) {
            case 1:
                printf("\n");
                printf("Quantos abacaxis deseja comprar? ");
                scanf("%d", &buffer);
                qabacaxi += buffer;
                break;
            case 2:
                printf("\n");
                printf("Quantos macas deseja comprar? ");
                scanf("%d", &buffer);
                qmaca += buffer;
                break;
            case 3:
                printf("\n");
                printf("Quantos peras deseja comprar? ");
                scanf("%d", &buffer);
                qpera += buffer;
                break;
            case 4:
                printf("\n");
                printf("Resultado.\n");
                if(qabacaxi != 0) {
                    printf("%dx Abacaxi - R$ %.2f\n", qabacaxi, (float) qabacaxi*5);
                }
                if(qmaca != 0) {
                    printf("%dx Maca - R$ %.2f\n", qmaca, (float) qmaca*1);
                }
                if(qpera != 0) {
                    printf("%dx Pera - R$ %.2f\n", qpera, (float) qpera*4);
                }
                printf("\nTotal: %.2f\n", (float) qpera*5 + (float) qmaca*1 + (float) qabacaxi*4);
                return 0;
            default:
                printf("Opcao invalida, tente novamente.");
                break;
        }
    }
    return 0;
}