#include <stdio.h> 

int main() {
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    //Imprimindo o conteudo de i e j
    printf("%d %d", i, j);
    //Imprimindo o endereco de i e j
    printf("\n%d %d", p, q);
    //Imprimindo as declaracoes
    printf("\n%d %d %d %d", p == &i, *p - *q, **&p, 3 - *p/(*q) + 7);

    return 0;
}