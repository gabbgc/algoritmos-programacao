#include <stdio.h>
#include <math.h>

int main() {
    double a, b,c, delta, x1, x2;
    printf("Digite a : ");
    scanf("%lf", &a);
    if(a == 0) {
        printf("Nao e equacao de segundo grau");
        return 0;
    }
    printf("Digite b : ");
    scanf("%lf", &b);
    printf("Digite c : ");
    scanf("%lf", &c);
    delta = pow(b, 2) - 4*a*c;
    if(delta < 0) {
        printf("Nao existe raiz");
        return 0;
    }
    x1 = (-b + sqrt(delta))/(2*a);
    if(delta == 0) {
        printf("Raiz: %g\n", x1);
        printf("Raiz unica");
        return 0;
    }
    x2 = (-b - sqrt(delta))/(2*a);
    printf("Raiz 1: %g\n", x1);
    printf("Raiz 2: %g", x2);
    return 0;
}