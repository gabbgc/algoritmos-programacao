#include <stdio.h>

int main() {
    int soma = 0, buffer = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite o valor %d : ", i + 1);
        scanf("%d", &buffer);
        soma += buffer;
    }
    printf("Soma: %d", soma);
    return 0;
}