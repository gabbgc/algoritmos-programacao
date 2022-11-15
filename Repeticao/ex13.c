#include <stdio.h>

int main() {
    int antepen = 0;
    int pen = 1;
    int atual = 1;
    int n;
    printf("Digite um numero inteiro positivo n : ");
    scanf("%d", &n);
    if(n == 1) {
        printf("O enesimo termo da sequencia de fibonacci e: %d", antepen);
        return 0;
    }
    for(int i = 4; i <= n; i++) {
        antepen = pen;
        pen = atual;
        atual = antepen + pen;
    }
    printf("O enesimo termo da sequencia de fibonacci e: %d", atual);
    return 0;
}