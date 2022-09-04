#include <stdio.h>

/*Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de
matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora
e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados
de entrada e os dados de saída.*/

int main() {
    char nome[20];
    char sexo;
    char matricula[20];
    float horasTrabalhadas;
    float salarioHora;
    float salarioMensal;
    printf("Qual o seu nome? ");
    scanf("%[^\n]", &nome);
    printf("Qual o seu sexo? (M/F)");
    scanf("\n%c", &sexo);
    printf("Qual a sua matricula? ");
    scanf("%s", &matricula);
    printf("Quantas horas trabalhou esse mes? ");
    scanf("%f", &horasTrabalhadas);
    printf("Quanto voce ganha por hora? ");
    scanf("%f", &salarioHora);
    salarioMensal = horasTrabalhadas * salarioHora;
    printf("\nSeu nome: %s\nSeu sexo: %c\nSua matricula: %s\n", nome, sexo, matricula);
    printf("Horas Trabalhadas: %g\nSalario Hora: %g\nSalario Mensal: %g", horasTrabalhadas, salarioHora, salarioMensal);
    return 0;
}