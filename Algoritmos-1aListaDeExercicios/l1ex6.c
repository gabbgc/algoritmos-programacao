#include <stdio.h>

/*Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.*/

int main() {
    float notaA, notaB, mediaAluno;
    printf("Digite a nota A: ");
    scanf("%f", &notaA);
    printf("Digite a nota B: ");
    scanf("%f", &notaB);
    mediaAluno = (3.5*notaA + 7.5*notaB)/11;
    printf("A sua media e: %g", mediaAluno);
    return 0;
}