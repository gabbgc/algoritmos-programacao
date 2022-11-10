#include <stdio.h>

int main() {
    double media;
    int buffer, ph = 10;
    for(int i = 0; i < 10; i++) {
        printf("Digite o numero inteiro positivo %d : ", i + 1);
        scanf("%d", &buffer);
        if(buffer < 0) {
            ph--;
            continue;
        }
        media += ((double) buffer);
    }
    media = media / ph;
    printf("Media: %g", media);
    return 0;
}