#include <stdio.h>

int main() {
  int i=1, j=2;
  int *p, *q;
  p = &i;
  q = &j;

  printf("%d\n", p = i);
  printf("%d\n", q = &j);
  printf("%d\n", p = &*&i);
  //printf("%d\n", i = (*&)j);
  printf("%d\n", i = *&j);
  printf("%d\n", i = *&*&j);
  printf("%d\n", q = *p);
  printf("%d\n", i = (*p)++ +*q);

  return 0;
}