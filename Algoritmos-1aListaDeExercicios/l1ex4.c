#include <stdio.h>
#include <math.h>

/*Construa um algoritmo que a partir da leitura de dois números forneça o resto e o
quociente da divisão do primeiro pelo segundo número.
– Lembre-se das expressões aritméticas:
1. mod → m mod i: resto da divisão de m por i
2. (\) → m \ i: quociente da divisão de m por i
Exemplo: 5 mod 2 é 1
5 \ 2 é 2*/

int main() {
    int n1, n2;
    float resto, quociente;
    printf("Insira o n1: ");
    scanf("%d", &n1);
    printf("Insira o n2: ");
    scanf("%d", &n2);
    resto = n1 % n2;
    quociente = floor(n1 / n2);
    printf("O resto da divisao de n1 por n2 e: %g\n", resto);
    printf("O quociente da divisao de n1 por n2 e: %g\n", quociente);
    return 0;
}