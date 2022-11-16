#include <stdio.h>

int main() {
    int z = 1, soma = 0;
    for(int i = 1; i <= 55; i++) {
        soma += z/i;
        z += 2;
    }
    printf("%d", soma);
    return 0;
}