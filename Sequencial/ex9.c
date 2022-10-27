/*
9. Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha
15% de comissão sobre suas vendas efetuadas, informar o total a receber no final
do mês, com duas casas decimais.
*/

#include <stdio.h>

int main() {
	char nome[50];
	double totalVendido, totalReceber;
	
	printf("Digite os seus dados de vendedor.\n");
	printf("Nome: ");
	scanf("%[^\n]s", &nome);
	fflush(stdin);
	printf("Total Vendido: ");
	scanf("%lf", &totalVendido);
	
	totalReceber = totalVendido * 0.15;
	
	printf("Total a receber: %.2lf", totalReceber);
}
