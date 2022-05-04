#include <stdio.h>      
#include <stdlib.h>
#include <time.h> //Biblioteca para funcao clock()

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
  clock_t tempo0, tempo1, tempo;

  cresc = malloc(n * sizeof(float)); //Alocacao dinamica do vetor na mem.
  
  printf("Insira o limite do vetor 'cresc': ");
  scanf("%d", &n);
  
  for(i = 0; i < n; i++) {
    printf("Digite os valores do vetor 'cresc': ");
    scanf("%f", &cresc[i]);
  }

  tempo0 = clock(); //Inicializa o 'Clock'

  //Ordenando o vetor com funcao qsort()
  qsort (cresc, n, sizeof(float), compara); 
  
  //Imprimindo em ordem
  printf("\n===== Ordenando vetor 'cresc' =====\n");
  for(i = 0; i < n; i++) {
    printf("%.1f\n", cresc[i]);
  }

  tempo1 = clock(); //Encerra o 'Clock'
  tempo = tempo1 - tempo0; //Calcula tempo

  printf("\nTempo de execucao: %.2lf", ((double)tempo)/((CLOCKS_PER_SEC/1000))); //Imprime tempo

  //Liberacao da mem.
  free(cresc);

  return 0;
}