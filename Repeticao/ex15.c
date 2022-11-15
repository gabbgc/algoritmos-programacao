#include <stdio.h>

int main() {
    int n;
    double hn;
    printf("Digite um numero inteiro positivo n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        hn += 1/(float)i;
    }
    printf("O hn vale: %g", hn);
    return 0;
}