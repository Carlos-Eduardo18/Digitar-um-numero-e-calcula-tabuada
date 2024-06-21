// Escreva um programa que solicite ao usuário um número e imprima a tabuada desse número de 1 a 100

#include <stdio.h>

int main() {
  int r, i = 1, d;
  printf("Digite um número para a tabuada:\n");
  scanf("%i", &d);
  while(i <= 10){
    r = d * i;
    printf("%d X %d = %d\n", i, d, r);
    i++;
  }
}