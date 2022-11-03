#include <stdio.h>
#include <math.h>

/*Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
construtor tem a quantidade total de fios em metros a serem utilizados na instalação
elétrica da obra e que cada rolo de fio tem 50 metros.*/

int main() {
    int metrosFios, metrosAvulsos, rolos;
    printf("de quantos metros de fios voce precisa? ");
    scanf("%d", &metrosFios);
    rolos = floor(metrosFios/50);
    metrosAvulsos = metrosFios % 50;
    printf("Compre: %d rolo(s) e %d de metros avulsos de fio", rolos, metrosAvulsos);
    return 0;
}