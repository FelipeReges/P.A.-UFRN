#include <stdio.h>
#include <stdlib.h>

//Funcao troca de variaveis
void troca(float *a, float *b) {
  float aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

int main(void) {
  int n, i, j;
  float *cresc;
  cresc = malloc(n * sizeof(float)); //Alocacao dinamica do vetor na mem.
  
  printf("Insira o limite do vetor 'cresc': ");
  scanf("%d", &n);
  
  for(i = 0; i < n; i++) {
    printf("Digite os valores do vetor 'cresc': ");
    scanf("%f", &cresc[i]);
  }
  
  //Loop que ordena os valores em ordem crescente
  for(i = 0; i < n-1; i++) { 
    for(j = i+1; j<n; j++) {
      if(cresc[i] > cresc[j]) {
        troca(&cresc[i], &cresc[j]); 
      }
    }
  }
  
  //Imprimindo em ordem
  printf("\n===== Ordenando vetor 'cresc' =====\n");
  for(i = 0; i < n; i++) {
    printf("%.1f\n", cresc[i]);
  }

  //Liberacao da mem.
  free(cresc);

  return 0;
}