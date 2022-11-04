#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Valor A : ");
    scanf("%d", &a);
    printf("Valor B : ");
    scanf("%d", &b);
    printf("Valor C : ");
    scanf("%d", &c);
    printf("Valor D : ");
    scanf("%d", &d);
    if(b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0)
        printf("Valores aceitos");
    else
        printf("Valores nao aceitos");
    return 0;
}