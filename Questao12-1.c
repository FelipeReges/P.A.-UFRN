#include <stdio.h>

int executa(int (*ptr)(int, int), int a, int b) {
  return ptr(a, b);
}

int maior(int a, int b) {
  return (a > b) ? a : b; //Ternário; É o mesmo que "if(a>b) x=a; else x=b;"
}

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

  printf("Maior = %d\n", executa(maior, x, y));
  printf("Soma = %d\n", executa(soma, x, y));

  return 0;
}