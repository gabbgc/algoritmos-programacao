#include <stdio.h>

int main() {
    double altura, peso;
    printf("Digite a sua altura em metros : ");
    scanf("%lf", &altura);
    printf("Digite o seu peso : ");
    scanf("%lf", &peso);
    if(altura < 1.20) {
        if(peso < 60.0) {
            printf("A");
        }
        else if(peso >= 60.0 && peso <= 90.0) {
            printf("D");
        }
        else if(peso > 90.0) {
            printf("G");
        }
    }
    else if(altura >= 1.20 && altura < 1.70) {
        if(peso < 60.0) {
            printf("B");
        }
        else if(peso >= 60.0 && peso <= 90.0) {
            printf("E");
        }
        else if(peso > 90.0) {
            printf("H");
        }
    }
    else if(altura >= 1.70) {
        if(peso < 60.0) {
            printf("C");
        }
        else if(peso >= 60.0 && peso <= 90.0) {
            printf("F");
        }
        else if(peso > 90.0) {
            printf("I");
        }
    }
    return 0;
}