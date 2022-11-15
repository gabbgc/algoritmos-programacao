#include <stdio.h>

int main() {
    int n, c1 = 1;
    printf("Digite um numero positivo n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int z = 0; z < i; z++) {
            printf("%d ", c1);
            c1++;
        }
        printf("\n");
    }
    return 0;
}