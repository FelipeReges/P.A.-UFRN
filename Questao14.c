/* A função qsort() é uma função em C utilizada para ordenação de arrays. 

O protótipo da função é: 
 => void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*)),

onde base é um ponteiro para o primeiro elemento do array, nitems é o número de elementos do array, 
size é o tamanho em bytes de cada elemento do array e compar é a função criada para o problema e 
que compara dois elementos.
Os três primeiros parâmetros são simples de fornecer, mas o último exige maior atenção. Ele consiste 
de um ponteiro para uma função que é responsável por comparar dois valores fornecidos como parâmetro 
para a função. Essa função deverá retornar:

 - Valor maior do que zero: se o primeiro valor for maior do que o segundo.
 - Valor menor do que zero: se o primeiro valor for menor do que o segundo.
 - Zero: se os valores forem iguais. */

#include <stdio.h>      
#include <stdlib.h>

//Funcao que retorna valor <0, >0 ou =0
int compara(const void * a, const void * b) {
  if(*(float*)a < *(float*)b)
    return -1;
  
  else if(*(float*)a > *(float*)b)
    return 1;
  
  else
    return 0;
}

int main(void) {
  int n, i;
  float *cresc;
  cresc = malloc(n * sizeof(float)); //Alocacao dinamica do vetor na mem.
  
  printf("Insira o limite do vetor 'cresc': ");
  scanf("%d", &n);
  
  for(i = 0; i < n; i++) {
    printf("Digite os valores do vetor 'cresc': ");
    scanf("%f", &cresc[i]);
  }

  //Ordenando o vetor com funcao qsort()
  qsort (cresc, n, sizeof(float), compara); 
  
  //Imprimindo em ordem
  printf("\n===== Ordenando vetor 'cresc' =====\n");
  for(i = 0; i < n; i++) {
    printf("%.1f\n", cresc[i]);
  }

  //Liberacao da mem.
  free(cresc);

  return 0;
}