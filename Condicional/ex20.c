#include <stdio.h>
#include <math.h>

int main() {
    double n1, n2, n3, n4, media, nexame;
    printf("Digite n1 : ");
    scanf("%lf", &n1);
    n1 = floor(n1*10)/10;
    printf("Digite n2 : ");
    scanf("%lf", &n2);
    n2 = floor(n2*10)/10;
    printf("Digite n3 : ");
    scanf("%lf", &n3);
    n3 = floor(n3*10)/10;
    printf("Digite n4 : ");
    scanf("%lf", &n4);
    n4 = floor(n4*10)/10;
    media = (n1*2 + n2*3 + n3*4 + n4)/10;
    if(media >= 7.0) {
        printf("Aluno aprovado.");
    }
    else if(media < 5) {
        printf("Aluno reprovado.");
    }
    else {
        printf("Aluno em exame.\n");
        printf("Nota do exame: ");
        scanf("%lf", &nexame);
        media = (media + nexame)/2;
        if(media >= 5) {
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %g", media);
    }
    return 0;
}