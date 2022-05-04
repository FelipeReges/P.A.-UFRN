/*O uso de ponteiros para funções em C serve principalmente 
para definir, em tempo de execução, qual função será executada, 
sem a necessidade de escrever o nome da função, de forma 
explícita naquele ponto do código. */

#include <stdio.h>

int soma(int a, int b) {
  return a + b;
}

int main(void) {
  int x, y, z;
  int (*p)(int, int);
  printf("Digite o valor de x: ");
  scanf("%d", &x);
  printf("Digite o valor de y: ");
  scanf("%d", &y);

  //Ponteiro recebe endereço da função
  p = soma;
  z = p(x, y);
  printf("Soma = %d\n", z);

  return 0;
}