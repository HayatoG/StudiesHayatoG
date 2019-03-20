#include <stdio.h>

void selection_sort(int vetor[], int tamanho) { 
  int i, j, min, aux;
  for (i = 0; i < (tamanho-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tamanho; j++) {
       if(vetor[j] < vetor[min]) 
         min = j;
     }
     if (vetor[i] != vetor[min]) {
       aux = vetor[i];
       vetor[i] = vetor[min];
       vetor[min] = aux;
     }
  }
}

int main () {
  int vetor[100], tamanho;
  printf("Digite o tamanho do vetor: ");
  scanf ("%d",&tamanho);
  printf("\n");

  /* Lê os algarismos do vetor */
  for(int i=0; i<tamanho; i++){
    printf("Digite o %dº número: ", i+1);
    scanf ("%d", &vetor[i]);
  }  
  selection_sort (vetor, tamanho);

  for(int i=0; i<tamanho; i++){
  printf("Posição %d de valor %d\n", i, vetor[i]);
  }
}