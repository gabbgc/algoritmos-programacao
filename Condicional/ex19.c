#include <stdio.h>
#include <math.h>

int main() {
    double valor, cpvalor, buffer;
    int notas100=0, notas50=0, notas20=0, notas10=0, notas5=0, notas2=0;
    int moeda1=0, moeda05=0, moeda025=0, moeda010=0, moeda005=0, moeda001=0;
    printf("Digite o valor em dinheiro : ");
    scanf("%lf", &valor);
    valor *= 100;
    valor = floor(valor);
    valor /= 100;
    cpvalor = valor;
    buffer = floor(valor /100);   
    for(int i = 0; i < buffer; i++) {
        notas100 += 1;
        valor -= 100;
    }
    buffer = floor(valor/50);   
    for(int i = 0; i < buffer; i++) {
        notas50 += 1;
        valor -= 50;
    }
    buffer = floor(valor/20);  
    for(int i = 0; i < buffer; i++) {
        notas20 += 1;
        valor -= 20;
    }
    buffer = floor(valor/10);  
    for(int i = 0; i < buffer; i++) {
        notas10 += 1;
        valor -= 10;
    }
    buffer = floor(valor/5);   
    for(int i = 0; i < buffer; i++) {
        notas5 += 1;
        valor -= 5;
    }
    buffer = floor(valor/2);   
    for(int i = 0; i < buffer; i++) {
        notas2 += 1;
        valor -= 2;
    }
    buffer = floor(valor/1);  
    for(int i = 0; i < buffer; i++) {
        moeda1 += 1;
        valor -= 1;
    }
    buffer = floor(valor/(float)0.5); 
    for(int i = 0; i < buffer; i++) {
        moeda05 += 1;
        valor -= 0.50;
    }
    buffer = floor(valor/(float)0.25);
    for(int i = 0; i < buffer; i++) {
        moeda025 += 1;
        valor -= 0.25;
    }
    buffer = floor(valor/(float)0.10);
    for(int i = 0; i < buffer; i++) {
        moeda010 += 1;
        valor -= 0.10;
    }
    buffer = floor(valor/(float)0.05);
    for(int i = 0; i < buffer; i++) {
        moeda005 += 1;
        valor -= 0.05;
    }
    buffer = floor(valor/(float)0.01);
    for(int i = 0; i < buffer; i++) {
        moeda001 += 1;
        valor -= 0.01;
    }
    printf("Valor : %g\n", cpvalor);
    printf("Notas de 100 : %d\n", notas100);
    printf("Notas de 50 : %d\n", notas50);
    printf("Notas de 20 : %d\n", notas20);
    printf("Notas de 10 : %d\n", notas10);
    printf("Notas de 5 : %d\n", notas5);
    printf("Notas de 2 : %d\n", notas2);
    printf("Moedas de 1 : %d\n", moeda1);
    printf("Moedas de 0.5 : %d\n", moeda05);
    printf("Moedas de 0.25 : %d\n", moeda025);
    printf("Moedas de 0.10 : %d\n", moeda010);
    printf("Moedas de 0.05 : %d\n", moeda005);
    printf("Moedas de 0.01 : %d\n", moeda001);
    return 0;
}