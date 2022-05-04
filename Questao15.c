#include <stdio.h>      
#include <stdlib.h>

//Funcao que compara dois valores 
int compara(float a, float b){
  if(a < b)
    return -1;
  
  else if(a > b)
    return 1;
  
  else
    return 0;
}

//Funcao que efetua a troca por ordenacao
void troca(float *a, float *b) {
  float aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

//Funcao para qsort()
void qsortf(float *cresc,int n, int(*compara)(float, float)) {
  int i, j;

  for(i = 0; i < n-1; i++) {
    for(j = i+1; j < n; j++) {
      if(compara(cresc[i], cresc[j]) == 1) {
        troca(&cresc[i], &cresc[j]);
      }
    }
  }
}

int main () {
  int n, i;
  float *cresc;
  cresc = malloc(n*sizeof(float)); //Alocacao dinamica do vetor na mem.
  
  printf("Insira o limite do vetor 'cresc': ");
  scanf("%d", &n);
  
  for(i = 0; i < n; i++) {
    printf("Digite os valores do vetor 'cresc': ");
    scanf("%f", &cresc[i]);
  }
  
  //Direciona para a funcao qsortf
  qsortf(cresc, n, compara);

  //Imprimindo em ordem
  printf("\n===== Ordenando vetor 'cresc' =====\n");
  for(i = 0; i < n; i++) {
    printf("%.1f\n", cresc[i]);
  }

  //Liberacao da mem.
  free(cresc);

  return 0;
}