#include<stdio.h>

void quickSort(int *vetor, int inicio, int fim) {

	int i, j, meio, pivo;
     
    i = inicio;
    j = fim;
    meio = vetor[(inicio + fim) / 2];
     
    while(i <= j) {
        while(vetor[i] < meio && i < fim) {
            i++;
        }
        while(vetor[j] > meio && j > inicio) {
            j--;
        }
        if(i <= j) {
            pivo = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = pivo;
            i++;
            j--;
        }
    }
     
    if(j > inicio) {
        quickSort(vetor, inicio, j);
    }
    if(i < fim) {
        quickSort(vetor, i, fim);
    }
}




int main(){
   
   int vetor[4] = {4, 5, 6, 1};
   int i;   

   printf("Vetor desordenado:\n");
   for(i = 0; i < 4; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   
   
   quickSort(vetor, 0, 3);
   
   printf("Vetor ordenado:\n");
   for(i = 0; i < 4; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   
}

