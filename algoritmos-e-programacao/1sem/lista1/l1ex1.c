#include <stdio.h>

/*Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o
correspondente em minutos e segundos destas horas.*/

int main() {
  int horas, minutos, segundos;
  printf("Escreva um numero de horas em inteiro: ");
  scanf("%d", &horas);
  minutos = horas * 60;
  segundos = horas * 3600;
  printf("%d horas equivalem a %d minutos ou %d segundos.", horas, minutos, segundos);
  return 0;
}
