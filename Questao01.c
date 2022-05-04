#include <stdio.h>

int main() {
  int i=3, j=5;
  int *p, *q;
  p = &i;
  q = &j;

  printf("%d ", p == &i);
  printf("%d ", *p - *q);
  printf("%d ", **&p);
  printf("%d ", 3 - *p/(*q) + 7);

  return 0;
}