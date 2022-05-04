#include <stdio.h>

int main() {
  char x1[4] = {"4233"};
  int x2[4] = {4, 9, 13, 49};
  float x3[4] = {4, 9, 13, 49};
  double x4[4] = {4, 9, 13, 49};
  int i;

  for(i=0; i<4; i++)
    printf("x como char: x + %d = %p \n", i+1, (x1+i));
  
  printf("\n");

  for(i=0; i<4; i++)
    printf("x como int: x + %d = %p \n", i+1, (x2+i));

  printf("\n");

  for(i=0; i<4; i++)
    printf("x como float: x + %d = %p \n", i+1, (x3+i));

  printf("\n");

  for(i=0; i<4; i++)
    printf("x como double: x + %d = %p \n", i+1, (x4+i));

  printf("\n");

  return 0;
}