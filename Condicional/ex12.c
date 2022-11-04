#include <stdio.h>

int main() {
    float x, y;
    printf("Digite o valor X do ponto : ");
    scanf("%f", &x);
    fflush(stdin);
    printf("Digite o valor Y do ponto : ");
    scanf("%f", &y);
    fflush(stdin);
    if(x > 0) {
        if(y > 0) {
            printf("Q1");
        }
        else if(y < 0) {
            printf("Q4");
        }
        else {
            printf("Eixo X");
        }
    }
    else if(x < 0) {
        if(y > 0) {
            printf("Q2");
        }
        else if(y < 0) {
            printf("Q3");
        }
        else {
            printf("Eixo X");
        }
    }
    else {
        if(y == 0) {
            printf("Origem");
        }
        else {
            printf("Eixo Y");
        }
    }
    return 0;
}