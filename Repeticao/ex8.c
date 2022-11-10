#include <stdio.h>

int main() {
    double media = 0;
    int buffer;
    for(int i = 0; i < 10; i++) {
        printf("Digite o numero inteiro %d : ", i + 1);
        scanf("%d", &buffer);
        media += ((double) buffer)/10;
    }
    printf("Media: %g", media);
    return 0;
}